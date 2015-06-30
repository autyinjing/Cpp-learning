// =====================================================================================
//
//       Filename:  cblob.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月15日 20时41分34秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         CBLOB_H
#define         CBLOB_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <stdexcept>

class StrBlobPtr;
class StrBlob
{
        public:
                friend class    StrBlobPtr;

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
                //返回指向首元素和尾元素的StrBlobPtr
                StrBlobPtr begin();
                StrBlobPtr end();
        private:
                std::shared_ptr<std::vector<std::string>>       data;
                void check(size_type i, const std::string &msg) const;
};

/*
class ConstStrBlobPtr
{
        public:
                ConstStrBlobPtr() : curr(0) {}
                ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) :
                        wptr(a.data), curr(sz) {}
                const std::string& deref() const;
                const ConstStrBlobPtr& incr();
                bool is_end();
};
*/

class StrBlobPtr
{
        public:
                StrBlobPtr() : curr(0) {}
                StrBlobPtr(StrBlob &a, size_t sz = 0) :
                        wptr(a.data), curr(sz) {}
                std::string& deref() const;     //访问元素
                StrBlobPtr& incr();             //前缀递增
                bool is_end();
        private:
                //若检查成功，check返回一个指向vector的shared_ptr
                std::shared_ptr<std::vector<std::string>>
                        check(std::size_t, const std::string&) const;
                //保存一个weak_ptr，意味着底层vector可能会被销毁
                std::weak_ptr<std::vector<std::string>> wptr;
                std::size_t     curr;
};

using std::string;
using std::vector;
using std::size_t;
using std::shared_ptr;

//StrBlobPtr类的成员函数定义
shared_ptr<vector<string>>
StrBlobPtr::check(size_t i, const string &msg) const
{
        auto    ret = wptr.lock();      //检查vector是否还存在
        if (!ret)
                throw std::runtime_error("unbound StrBlobPtr");
        if (i > ret->size())
                throw std::out_of_range(msg);
        return ret;     //若存在，返回指向vector的shared_ptr
}

string& StrBlobPtr::deref() const
{
        auto    p = check(0, "derefence past end");
        return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
        //如果curr已经指向容器的尾后位置，则不能递增它
        check(curr, "increment past end of StrBlobPtr");
        ++curr;         //推进当前位置
        return *this;
}

bool StrBlobPtr::is_end()
{
        auto    ret = wptr.lock();
        if (!ret)
                throw std::runtime_error("unbound StrBlobPtr");
        if (curr == ret->size())
                return true;
        else
                return false;
}

//StrBlob类的成员函数定义
StrBlob::StrBlob() : data(std::make_shared<vector<string>>()) {}

StrBlob::StrBlob(std::initializer_list<string> il) : data(std::make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const
{
        if (i >= data->size())
                throw std::out_of_range(msg);
}

void StrBlob::pop_back()
{
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
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

const string& StrBlob::front() const
{
        check(0, "const front on empty StrBlob");
        return data->front();
}

const string& StrBlob::back() const
{
        check(0, "const back on empty StrBlob");
        return data->back();
}

StrBlobPtr StrBlob::begin()
{
        return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
        auto    ret = StrBlobPtr(*this, data->size());
        return ret;
}

#endif
