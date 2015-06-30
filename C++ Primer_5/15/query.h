// =====================================================================================
//
//       Filename:  query.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月30日 18时15分08秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         QUERY_H
#define         QUERY_H

#include <vector>
#include <string>
#include <memory>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>
                
using line_no = std::vector<std::string>::size_type;

class   QueryResult;
class   TextQuery
{
        public:
                TextQuery(std::ifstream&);
                QueryResult query(const std::string&) const;
        private:
                std::shared_ptr<std::vector<std::string>>       file;   //保存要查询的文件
                std::map<std::string,
                         std::shared_ptr<std::set<line_no>>>    wm;     //每个单词和它所在行号的set
};

class QueryResult
{
        friend std::ostream& print(std::ostream&, const QueryResult&);

        public:
        QueryResult(std::string s,
                    std::shared_ptr<std::set<line_no>> p,
                    std::shared_ptr<std::vector<std::string>> f) :
                sought(s), lines(p), file(f) { }
        std::shared_ptr<std::vector<std::string>>
                get_file() { return std::shared_ptr<std::vector<std::string>>(file); }
        std::set<line_no>::iterator
                begin() { return lines->begin(); }
        std::set<line_no>::iterator
                end() { return lines->end(); }

        private:
        std::string     sought;         //要查询的单词
        std::shared_ptr<std::set<line_no>>      lines;  //行号的set
        std::shared_ptr<std::vector<std::string>>       file;   //输入文件
};

class Query_base
{
        friend class Query;
        
        protected:
        //using   line_no = TextQuery::line_no;   //用于eval函数
        virtual ~Query_base() = default;

        private:
        virtual QueryResult eval(const TextQuery &) const = 0;
        virtual std::string rep() const = 0;
};

class Query
{
        friend Query operator~(const Query &);
        friend Query operator|(const Query &, const Query &);
        friend Query operator&(const Query &, const Query &);

        public:
        Query(const std::string&);      //构建一个新的WordQuery
        QueryResult eval(const TextQuery &t) const
        { return q->eval(t); }
        std::string rep() const { return q->rep(); }

        private:
        Query(std::shared_ptr<Query_base> query) : q(query) { }
        std::shared_ptr<Query_base>     q;
};

std::ostream &operator<<(std::ostream &os, const Query &query)
{
        return os << query.rep();
}

class WordQuery : public Query_base
{
        friend class Query;     //Query使用WordQuery构造函数

        WordQuery(const std::string &s) : query_word(s) { }
        QueryResult eval(const TextQuery &t) const
        { return t.query(query_word); }
        std::string rep() const { return query_word; }
        std::string     query_word;
};

class NotQuery : public Query_base
{
        friend Query operator~(const Query &);

        NotQuery(const Query &q) : query(q) { }
        QueryResult eval(const TextQuery &) const;
        std::string rep() const { return "~(" + query.rep() + ")"; }
        Query   query;
};

inline Query operator~(const Query &operand)
{
        return std::shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery : public Query_base
{
        protected:
                BinaryQuery(const Query &l, const Query &r, std::string s)
                        : lhs(l), rhs(r), opSym(s) { }
                std::string rep() const { return "(" + lhs.rep() + " " 
                                        + opSym + " " + rhs.rep() + ")"; }
                Query           lhs, rhs;       //右侧对象和左侧对象
                std::string     opSym;          //运算符的名字
};

class AndQuery : public BinaryQuery
{
        friend Query operator&(const Query &, const Query &);

        AndQuery(const Query &left, const Query &right) :
                BinaryQuery(left, right, "&") { }
        QueryResult eval(const TextQuery &) const;
};

inline Query operator&(const Query &lhs, const Query &rhs)
{
        return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery : public BinaryQuery
{
        friend Query operator|(const Query &, const Query &);

        OrQuery(const Query &left, const Query &right) :
                BinaryQuery(left, right, "|") { }
        QueryResult eval(const TextQuery &) const;
};

inline Query operator|(const Query &lhs, const Query &rhs)
{
        return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

//函数定义
using std::vector;
using std::string;
using std::set;
using std::map;
using std::shared_ptr;
using std::ifstream;
using std::ostream;
using std::istringstream;
using std::endl;
using std::make_shared;

//TextQuery类的成员函数定义
TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
        string  text;
        while (getline(is, text))       //逐行处理
        {
                file->push_back(text);  //保存文本
                int     n = file->size() - 1;   //保存行号
                istringstream   line(text);     //分解为单词
                string  word;                   //保存单词
                while (line >> word)            //逐个单词处理
                {
                        auto    &lines = wm[word];
                        if (!lines)     //单词第一次出现时，该指针为空
                                lines.reset(new set<line_no>); //分配新的set
                        lines->insert(n);       //插入行号
                }
        }
}

QueryResult TextQuery::query(const string &sought) const
{
        static shared_ptr<set<line_no>> nodata(new set<line_no>);
        auto    loc = wm.find(sought);
        if (loc == wm.end())
                return QueryResult(sought, nodata, file);       //未找到
        else
                return QueryResult(sought, loc->second, file);
}

ostream &print(ostream &os, const QueryResult &qr)
{
        os << qr.sought << " occurs " << qr.lines->size() << " "
                << ((qr.lines->size() > 1) ? " times " : " time ")
                << endl;
        for (auto num : *qr.lines)      //对set中的每个单词
                os << "\t(line " << num + 1 << ") "
                        << *(qr.file->begin() + num) << endl;
        return os;
}

//Query类的成员函数定义
inline Query::Query(const string &s) : q(new WordQuery(s)) { }

//eval函数定义
QueryResult OrQuery::eval(const TextQuery& text) const
{
        auto right = rhs.eval(text), left = lhs.eval(text);
        auto ret_lines = make_shared<set<line_no>>(left.begin(), left.end());
        ret_lines->insert(right.begin(), right.end());
        return QueryResult(rep(), ret_lines, left.get_file());
}

QueryResult AndQuery::eval(const TextQuery& text) const
{
        auto left = lhs.eval(text), right = rhs.eval(text);
        auto ret_lines = make_shared<set<line_no>>();

        set_intersection(left.begin(), left.end(),
                        right.begin(), right.end(),
                        inserter(*ret_lines, ret_lines->begin()));
        return QueryResult(rep(), ret_lines, left.get_file());
}

QueryResult NotQuery::eval(const TextQuery& text) const
{
        auto result = query.eval(text);
        auto ret_lines = make_shared<set<line_no>>();
        auto beg = result.begin(), end = result.end();
        auto sz = result.get_file()->size();
        for (size_t n = 0; n != sz; ++n)
        {
                if (beg == end || *beg != n)
                        ret_lines->insert(n);
                else if (beg != end)
                        ++beg;
        }
        return QueryResult(rep(), ret_lines, result.get_file());
}

#endif
