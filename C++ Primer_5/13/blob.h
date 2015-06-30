// =====================================================================================
//
//       Filename:  blob.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/18/2014 08:14:32 PM
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
#include <initializer_list>
#include <memory>

using std::shared_ptr;
using std::make_shared;

class StrBlob
{
        public:
                using size_type = std::vector<std::string>::size_type;
                StrBlob() = default;
                StrBlob(std::initializer_list<std::string> il) : 
                        data(make_shared<std::vector<std::string>>(il)) { }
                StrBlob(const StrBlob& sb) : 
                        data(shared_ptr<std::vector<std::string>>(sb.data)) { }
                StrBlob operator=(const StrBlob&);
        private:
                std::shared_ptr<std::vector<std::string>>       data;
};

using std::vector;
using std::string;

StrBlob StrBlob::operator=(const StrBlob& sb)
{
        auto    newp = shared_ptr<vector<string>>(sb.data);
        data = newp;
        return *this;
}

#endif
