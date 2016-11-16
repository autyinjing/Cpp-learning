/* ***********************************************************************

  > File Name: property_tree.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月10日 星期四 14时50分44秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

using namespace std;
using namespace boost;
using namespace boost::property_tree;

int main(int argc, const char* argv[])
{
    //ptree pt;
    //read_xml("conf.xml", pt);

    //cout << pt.get<string>("conf.theme") << endl;
    //cout << pt.get<int>("conf.clock_style") << endl;
    //cout << pt.get<long>("conf.gui") << endl;
    //cout << pt.get("conf.no_prop", 100) << endl;

    //auto child = pt.get_child("conf.urls");
    //for (auto pos = child.begin(); pos != child.end(); ++pos)
        //cout << pos->second.data() << ", ";
    //cout << endl;

    //pt.put("conf.theme", "Matrix Reloaded");
    //pt.put("conf.clock_style", 12);
    //pt.put("conf.gui", 0);
    //pt.add("conf.urls.url", "http://www.ur14.org");

    //write_xml("conf.xml", pt);

    ptree pt;
    read_xml("conf.xml", pt);
    cout << pt.get<string>("conf.<xmlcomment>") << endl;
    cout << pt.get<string>("conf.clock_style.<xmlattr>.name") << endl;
    cout << pt.get<int>("conf.clock_style") << endl;
    cout << pt.get<long>("conf.theme.<xmlattr>.id") << endl;
    cout << pt.get<string>("conf.urls.<xmlcomment>") << endl;

    return 0;
}

