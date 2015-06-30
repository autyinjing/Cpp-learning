// =====================================================================================
//
//       Filename:  message.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 04:09:10 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         MESSAGE_H
#define         MESSAGE_H

#include <string>
#include <set>
#include <algorithm>
#include <iostream>

class Folder;
class Message
{
        friend class Folder;
        friend void swap(Message &, Message &);

        public:
                explicit Message(const std::string& s = "") :
                        contents(s) { }
                Message(const Message& );
                Message& operator=(const Message&);
                ~Message();

                //添加到或从删除一个指定的Folder
                void save(Folder &);
                void remove(Folder &);
        private:
                std::string     contents;       //保存信息文本
                std::set<Folder *>      folders;//保存所有包含该信息的Folder

                //以下操作被拷贝控制操作调用，所以定义为私有成员
                void add_to_Folders(const Message &);
                void remove_from_Folders();
};

class Folder
{
        friend void swap(Folder &, Folder &);

        public:
                Folder() { }
                Folder(const Folder &);
                Folder& operator=(const Folder&);
                ~Folder();

                //添加或删除指定的message
                void addMsg(Message &);
                void remMsg(Message &);

                //打印目录中的所有消息
                void print();

        private:
                std::set<Message *>     messages;       //保存指向所包含的所有message的指针
};

//Folder类的成员函数定义
Folder::Folder(const Folder &f)
{
        messages = f.messages;
        for (auto m : messages)
                m->save(*this);
}

Folder::~Folder()
{
        for (auto m : messages)
                m->remove(*this);
}

Folder& Folder::operator=(const Folder &f)
{
        for (auto m : messages)
                m->remove(*this);
        messages = f.messages;
        for (auto m : messages)
                m->save(*this);
        return *this;
}

void Folder::addMsg(Message &m)
{
        messages.insert(&m);
}

void Folder::remMsg(Message &m)
{
        messages.erase(&m);
}

void swap(Folder &lhs, Folder &rhs)
{
        using std::swap;
        for (auto m : lhs.messages)
                m->remove(lhs);
        for (auto m : rhs.messages)
                m->remove(rhs);
        swap(lhs.messages, rhs.messages);
        for (auto m : lhs.messages)
                m->save(lhs);
        for (auto m : rhs.messages)
                m->save(rhs);
}

void Folder::print()
{
        for (auto m : messages)
                std::cout << m->contents << std::endl;
        std::cout << std::endl;
}

//Message类的成员函数定义
void Message::save(Folder &f)   //将本message添加到指定的folder中
{
        folders.insert(&f);
        f.addMsg(*this);
}

void Message::remove(Folder &f) //将本message从指定的folder中删除
{
        folders.erase(&f);
        f.remMsg(*this);
}

void Message::add_to_Folders(const Message &m)   //将本message添加到所有包含本message的folder中
{
        for (auto f : m.folders)
                f->addMsg(*this);
}

void Message::remove_from_Folders() //从所有包含本message的folder中删除本message
{
        for (auto f : folders)
                f->remMsg(*this);
}

//拷贝构造函数
Message::Message(const Message &m) : 
        contents(m.contents), folders(m.folders)
{
        //contents = m.contents;
        //folders = m.folders;
        add_to_Folders(m);
}

//析构函数
Message::~Message()
{
        remove_from_Folders();
}

//拷贝赋值运算符
Message& Message::operator=(const Message &m)
{
        //先从folders中删除，再重新添加，防止自赋值带来的问题
        remove_from_Folders();
        contents = m.contents;
        folders = m.folders;
        add_to_Folders(m);
        return *this;
}

//交换操作
void swap(Message &lhs, Message &rhs)
{
        //先将各自从各自的folders中删除，在重新添加到新的folders中
        using std::swap;        //使用std版本的swap，交换内置成员
        for (auto f : lhs.folders)
                f->remMsg(lhs);
        for (auto f : rhs.folders)
                f->remMsg(rhs);
        swap(lhs.contents, rhs.contents);
        swap(lhs.folders, rhs.folders);
        for (auto f : lhs.folders)
                f->addMsg(lhs);
        for (auto f : rhs.folders)
                f->addMsg(rhs);
}

#endif
