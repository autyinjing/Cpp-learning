/* ***********************************************************************

  > File Name: time.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月19日 星期三 16时25分06秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

#include <boost/date_time/posix_time/posix_time.hpp>

using namespace boost::posix_time;
using namespace boost::gregorian;
using namespace std;

template<typename Clock = microsec_clock>
class basic_ptimer
{
public:
    basic_ptimer() { restart(); }
    void restart() { _start_time = Clock::local_time(); }
    void elapsed() const { cout << Clock::local_time() - _start_time << endl; }
    ~basic_ptimer() { elapsed(); }

private:
    ptime _start_time;
};

typedef basic_ptimer<microsec_clock> ptimer;
typedef basic_ptimer<second_clock> sptimer;

class work_time
{
public:
    typedef map<time_period, string> map_t;

private:
    map_t map_ts;

    void init()
    {
        ptime p(day_clock::local_day());

        map_ts[time_period(p, hours(9))] = "It's too early, just relax.";
        p += hours(9);
        map_ts[time_period(p, hours(3)+minutes(30))] = "It's AM, please work hard.";
        p += hours(3) + minutes(30);
        map_ts[time_period(p, hours(1))] = "It's lunch time, are you hungry?";
        p += hours(1);
        map_ts[time_period(p, hours(4)+minutes(30))] = "It's PM, Ready go home.";
        p += hours(4) + minutes(30);
        map_ts[time_period(p, hours(6))] = "Are you still working? you do need a rest!";
    }

public:
    work_time() { init(); }

    void greeting(const ptime& t)
    {
        map_t::iterator pos;
        for (pos = map_ts.begin(); pos != map_ts.end(); ++pos)
        {
            if (pos->first.contains(t))
            {
                cout << pos->second << endl;
                break;
            }
        }
    }
};

int main(int argc, const char* argv[])
{
    //time_duration td(1, 60, 60, 1000*1000*6 + 1000);
    //cout << td << endl;

    //hours h(1);
    //minutes m(10);
    //seconds s(30);
    //millisec ms(1);

    //time_duration td1 = h + m + s + ms;
    //time_duration td2 = hours(2) + seconds(10);
    //cout << td1 << endl << td2 << endl;

    //time_duration td3 = duration_from_string("1:10:30:001");
    //cout << td3 << endl;

    //cout << to_simple_string(td3) << endl;
    //cout << to_iso_string(td3) << endl;

    //ptime p(date(2010, 3, 5), hours(1));
    //cout << p << endl;

    //ptime p1 = time_from_string("2010-3-5 01:00:00");
    //ptime p2 = from_iso_string("20100305T010000");
    //cout << p1 << endl << p2 << endl;

    //ptime p3 = second_clock::local_time();
    //ptime p4 = microsec_clock::universal_time();
    //cout << p3 << endl << p4 << endl;

    //ptime p(date(2010, 3, 20), hours(12)+minutes(30));

    //date d = p.date();
    //time_duration td = p.time_of_day();
    //cout << d << endl << td << endl;

    //ptime p(date(2010, 2, 14), hours(20));
    //tm t = to_tm(p);
    //cout << t.tm_year << endl << t.tm_hour << endl;
    //ptime pp = from_time_t(time(0));
    //cout << pp << endl;

    //ptime p(date(2010, 1, 1), hours(12));
    //time_period tp1(p, hours(8));
    //time_period tp2(p+hours(8), hours(1));
    //cout << tp1 << endl << tp2 << endl;
    //tp1.shift(minutes(30));
    //tp2.expand(seconds(30));
    //cout << tp1 << endl << tp2 << endl;
    
    //{
        //sptimer t;
        //for (int i = 0; i < 1000000; ++i)
        //{
            //++i;
            //--i;
            //++i;
            //--i;
            //++i;
            //--i;
        //}
    //}

    work_time wt;
    wt.greeting(second_clock::local_time());

    return 0;
}

