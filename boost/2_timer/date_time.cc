/* ***********************************************************************

  > File Name: date_time.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月19日 星期三 10时59分28秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <ctime>

#define BOOST_DATE_TIME_SOURCE
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace boost::gregorian;
using namespace std;

class credit_card
{
public:
    string bank_name;
    int bill_day_no;
    credit_card(const char* bname, int no)
        : bank_name(bname), bill_day_no(no) {}
    int calc_free_days(date consume_day = day_clock::local_day()) const
    {
        date bill_day(consume_day.year(), consume_day.month(), bill_day_no);
        if (consume_day > bill_day)
            bill_day += months(1);
        return (bill_day - consume_day).days() + 20;
    }

    friend bool operator<(const credit_card& l, const credit_card& r)
    {
        return l.calc_free_days() < r.calc_free_days();
    }
};

int main(int argc, const char* argv[])
{
    //date d1(2000, 1, 1);
    //date d2(2010, Jan, 1);
    //date d3 = from_string("1999-12-31");
    //date d4(from_string("2005/1/1"));
    //date d5 = from_undelimited_string("20111118");

    //cout << d1 << endl << d2 << endl;
    //cout << d3 << endl << d4 << endl << d5 << endl;
    //cout << day_clock::local_day() << endl;
    //cout << day_clock::universal_day() << endl;
    //cout << date(neg_infin) << endl;
    //cout << date(pos_infin) << endl;
    //cout << date(not_a_date_time) << endl;
    //cout << date(max_date_time) << endl;
    //cout << date(min_date_time) << endl;
    //cout << date(1399, 12, 1) << endl;

    //date d(2010, 4, 1);
    //cout << d.year() << "-" << d.month() << "-" << d.day() << endl;
    ////date::ymd_type ymd = d.year_month_day();
    ////cout << ymd.year << "/" << ymd.month << "/" << ymd.day << endl;
    ////cout << d.day_of_week() << " " << d.day_of_year() << " " << d.end_of_month() << endl;
    //cout << to_simple_string(d) << endl;
    //cout << to_iso_string(d) << endl;
    //cout << to_iso_extended_string(d) << endl;
    //cout << d << endl;

    //date dd;
    //cin >> dd;
    //cout << dd << endl;

    //date d(2012, 2, 1);
    //tm t = to_tm(d);
    //cout << t.tm_hour << " " << t.tm_mday << " " << t.tm_mon << " " << t.tm_year << endl;

    //date d2 = date_from_tm(t);
    //cout << d2 << endl;
    //days dd1(10), dd2(-100), dd3(255);
    //cout << dd1 << " " << dd2 << " " << dd3 << endl;
    //weeks w(3);
    //cout << w.days() << endl;
    //months m(5);
    //years y(2);

    //months m2 = y + m;
    //cout << m2.number_of_months() << endl;
    //cout << (y * 2).number_of_years() << endl;

    //date_period dp(date(2010, 1, 1), days(20));
    //cout << dp << endl;
    //cout << dp.begin() << endl;
    //cout << dp.last().day() << endl;
    //cout << dp.end() << endl;
    //cout << dp.length() << endl;

    //dp.shift(days(3));
    //cout << dp << endl;
    //dp.expand(days(3));
    //cout << dp << endl;

    //date d(2006, 11, 26);
    //day_iterator d_iter(d);
    //cout << *(++d_iter) << endl;

    //year_iterator y_iter(*d_iter, 3);
    //cout << *y_iter << endl;
    //cout << *(++y_iter) << endl;

    //typedef gregorian_calendar gre_cal;
    //cout << gre_cal::is_leap_year(2010) << endl;
    //cout << gre_cal::end_of_month_day(2010, 2) << endl;

    //date d(2008, 11, 20);
    //date d_start(d.year(), d.month(), 1);
    //date d_end = d.end_of_month();
    //for (day_iterator d_iter(d_start); d_iter != d_end; ++d_iter)
        //cout << *d_iter << " " << d_iter->day_of_week() << endl;

    /*date d(2008, 11, 20);
    date d18years = d + years(18);
    cout << d18years << " is " << d18years.day_of_week() << endl;
    int count = 0;
    for (day_iterator d_iter(date(d18years.year(), 11, 1));
        d_iter != d18years.end_of_month(); ++d_iter)
        if (d_iter->day_of_week() == Sunday)
            ++count;
    cout << "total " << count << " Sundays." << endl;

    count = 0;
    for (month_iterator m_iter(date(d18years.year(), 1, 1));
        m_iter < date(d18years.year() + 1, 1, 1); ++m_iter)
        count += m_iter->end_of_month().day();
    cout << "total " << count << " days of year." << endl;
    cout << "total " << (gre_cal::is_leap_year(d18years.year())?366:365) << " days of year." << endl;
*/

    credit_card a("A bank", 25);
    credit_card b("B bank", 12);

    credit_card tmp = std::max(a, b);
    cout << "Bank: " << tmp.bank_name << endl << "Free days: " << tmp.calc_free_days() << endl;

    return 0;
}

