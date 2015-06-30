// =====================================================================================
//
//       Filename:  blob.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月10日 08时21分33秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         BLOB_H
#define         BLOB_H

#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <stdexcept>

class StrBlobPtr;

class StrBlob
{
        public:
                friend class StrBlobPtr;

                typedef std::vector<std::string>::size_type     size_type;
                StrBlob();
                StrBlob(std::initializer_list<std::string> il);
                size_type size() const { return data->size(); }
                bool empty() const { return data->empty(); }
                //添加和删除元素
                void push_back(const std::string &t) { data->push_back(t); }
                void pop_back();
                //元素访问
                std::string& front();
                std::string& back();
                const std::string& front() const;
                const std::string& back() const;

                //StrBlobPtr::StrBlobPtr(StrBlob &, size_t);
                StrBlobPtr begin(); //{ return StrBlobPtr(*this); }
                StrBlobPtr end(); //{ auto ret = StrBlobPtr(*this, data->size()); return ret; }
        private:
                std::shared_ptr<std::vector<std::string>> data;
                void check(size_type i, const std::string &msg) const;
};

class StrBlobPtr
{
        public:
                StrBlobPtr() : curr(0) {}
                StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
                std::string& deref() const;
                StrBlobPtr& incr();     //前缀递增
        private:
                //若检查成功，返回一个指向vector的shared_ptr
                std::shared_ptr<std::vector<std::string>>
                        check(std::size_t, const std::string&) const;
                std::weak_ptr<std::vector<std::string>> wptr;
                std::size_t     curr;   //在数组中的当前位置
};

//StrBlob类的函数定义
using namespace std;

StrBlob::StrBlob() : data(make_shared<vector<string>>) {}

StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

//下标检测
void StrBlob::check(size_type i, const string &msg) const
{
        if (i >= data->size())
                throw out_of_range(msg);
}

string& StrBlob::front()
{
        check(0, "front on empty StrBlob");
        return data->front();
}

string& StrBlob::back()
{
        check(0, "back on empty StrBlob");
        return data->back();
}

void StrBlob::pop_back()
{
        check(0, "pop_back on StrBlob");
        data->pop_back();
}

const string& StrBlob::front() const
{
        check(0, "front on empty StrBlob");
        return data->front();
}

const string& StrBlob::back() const
{
        check(0, "back on empty StrBlob");
        return data->back();
}

inline StrBlobPtr StrBlob::begin()
{
        return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end()
{
        auto ret =  StrBlobPtr(*this, data->size());
        return ret;
}

//StrBlobPtr类的函数定义
shared_ptr<vector<string>>
StrBlobPtr::check(size_t i, const string &msg) const
{
        auto    ret = wptr.lock();
        if (!ret)
                throw runtime_error("unbound StrBlobPtr");
        if (i >= ret->size())
                throw out_of_range(msg);
        return ret;
}

string & StrBlobPtr::deref() const
{
        auto    p = check(curr, "dereference past end");
        return (*p)[curr];
}

//前缀递增，返回递增后的对象的引用
StrBlobPtr& StrBlobPtr::incr()
{
        //如果curr已经指向容器的尾后位置，就不能递增它
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
}

#endif
