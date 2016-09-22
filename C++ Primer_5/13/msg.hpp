/* ***********************************************************************

  > File Name: msg.hpp
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年09月07日 星期三 17时40分41秒

 ********************************************************************** */

#ifndef MSG_HPP
#define MSG_HPP

#include <string>
#include <set>
#include <iostream>

using namespace std;

class Folder;
class Msg
{
    friend class Folder;

public:
    explicit Msg(const string& c = "") : contents(c) {}
    ~Msg();
    Msg(const Msg&);
    Msg& operator=(const Msg&);

    void save(Folder&);
    void remove(Folder&);
    void showInfo();

private:
    string contents;
    set<Folder*> folders;

    void add_to_folders(const Msg&);
    void remove_from_folders();
};

class Folder
{
    friend class Msg;

public:
    Folder(const string n = "") : name(n) {}
    ~Folder();
    Folder(const Folder&);
    Folder& operator=(const Folder&);

    void addMsg(Msg*);
    void remMsg(Msg*);
    void showInfo();

private:
    string name;
    set<Msg*> msgs;
};


//class Msg
Msg::~Msg()
{
    remove_from_folders();
}

Msg::Msg(const Msg& m) : contents(m.contents), folders(m.folders)
{
    add_to_folders(m);
}

Msg& Msg::operator=(const Msg& m)
{
    remove_from_folders();
    contents = m.contents;
    folders = m.folders;
    add_to_folders(m);
    return *this;
}

void Msg::save(Folder& f)
{
    folders.insert(&f);
    f.addMsg(this);
}

void Msg::remove(Folder& f)
{
    folders.erase(&f);
    f.remMsg(this);
}

void Msg::add_to_folders(const Msg &m)
{
    for (auto f : m.folders)
        f->addMsg(this);
}

void Msg::remove_from_folders()
{
    for (auto f : folders)
        f->remMsg(this);
}

void Msg::showInfo()
{
    cout << "Contents: " << contents << endl;
    cout << "Folders: " << endl;
    for (auto f : folders)
        cout << f->name << endl;
}

//class Folder
Folder::~Folder()
{
    for (auto m : msgs)
        m->remove(*this);
}

Folder::Folder(const Folder& f) : name(f.name), msgs(f.msgs)
{
    for (auto m : msgs)
        m->save(*this);
}

Folder& Folder::operator=(const Folder& f)
{
    for (auto m : msgs)
        m->remove(*this);
    name = f.name;
    msgs = f.msgs;
    for (auto m : msgs)
        m->save(*this);
    return *this;
}

void Folder::addMsg(Msg* m)
{
    msgs.insert(m);
}

void Folder::remMsg(Msg* m)
{
    msgs.erase(m);
}

void Folder::showInfo()
{
    cout << "Name: " << name << endl;
    cout << "Msgs: " << endl;
    for (auto m : msgs)
        cout << m->contents << endl;
}

#endif
