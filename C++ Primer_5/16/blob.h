// =====================================================================================
//
//       Filename:  blob.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 13时03分14秒
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
#include <memory>
#include <initializer_list>

template <typename T> class Blob
{
        public:
                //类型别名定义
                typedef T        value_type;
                typedef typename std::vector<T>::size_type size_type;

                //构造函数
                Blob();
                Blob(typename T::iterator beg, typename T::iterator end);
                Blob(std::initializer_list<T> il);

                //Blob中的元素数目
                size_type size() const { return data->size(); }
                bool empty() const { return data->empty(); }

                //添加和删除元素
                void push_back(const T &t) { data->push_back(t); }
                void pop_back();

                //元素访问
                T& back();
                const T& back() const;
                T& front();
                const T& front() const;
                T& operator[](size_type i);
                const T& operator[](size_type i) const;

        private:
                std::shared_ptr<std::vector<T>>         data;
                void check(size_type i, const std::string &msg) const;
};

template <typename T> class BlobPtr
{
        public:
                BlobPtr() : curr(0) { }
                BlobPtr(Blob<T> &a, size_t sz = 0) :
                        wptr(a.data), curr(sz) { }
                T& operator*() const
                {
                        auto p = check(curr, "dereference past end");
                        return (*p)[curr];
                }

                //递增和递减
                BlobPtr& operator++();
                BlobPtr& operator--();
                BlobPtr operator++(int);
                BlobPtr operator--(int);
        private:
                std::shared_ptr<std::vector<T>>
                        check(std::size_t, const std::string&) const;
                std::weak_ptr<std::vector<T>>   wptr;
                std::size_t     curr;   //在数组中的当前位置
};

//函数定义

using std::initializer_list;
using std::make_shared;
using std::vector;
using std::string;
using std::out_of_range;

//模板类Blob的成员函数定义
template<typename T> 
Blob<T>::Blob() : data(nullptr) { }

template<typename T>
Blob<T>::Blob(typename T::iterator beg, typename T::iterator end)
                : data(make_shared<vector<T>>(beg, end)) { }

template<typename T>
Blob<T>::Blob(initializer_list<T> il) : data(make_shared<vector<T>>(il)) { }

template<typename T>
void Blob<T>::pop_back()
{
        check(0, "pop_back on empty Blob");
        data->pop_back();
}

template<typename T>
T& Blob<T>::back()
{
        check(0, "back on empty Blob");
        return data->back();
}

template<typename T>
const T& Blob<T>::back() const
{
        check(0, "back on empty Blob");
        return data->back();
}

template<typename T>
T& Blob<T>::front()
{
        check(0, "front on empty Blob");
        return data->front();
}

template<typename T>
const T& Blob<T>::front() const
{
        check(0, "front on empty Blob");
        return data->front();
}

template<typename T>
T& Blob<T>::operator[](size_type i)
{
        check(i, "subscript out of range");
        return (*data)[i];
}

template<typename T>
const T& Blob<T>::operator[](size_type i) const
{
        check(i, "subscript out of range");
        return (*data)[i];
}

template<typename T>
void Blob<T>::check(size_type i, const string &msg) const
{
        if (i >= data->size())
                throw out_of_range(msg);
}

//模板类BlobPtr的成员函数定义
template<typename T>
BlobPtr<T> BlobPtr<T>::operator++(int)  //后置递增
{
        BlobPtr ret = *this;
        ++*this;
        return ret;
}

template<typename T>
BlobPtr<T> BlobPtr<T>::operator--(int)  //后置递减
{
        BlobPtr ret = *this;
        --*this;
        return ret;
}

template<typename T>
BlobPtr<T>& BlobPtr<T>::operator++()    //前置递增，返回引用
{
        check(curr, "++()");
        ++curr;
        return *this;
}

template<typename T>
BlobPtr<T>& BlobPtr<T>::operator--()    //后置递减，返回引用
{
        --curr;
        check(curr, "--()");
        return *this;
}

#endif
