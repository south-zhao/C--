//
// Created by 赵鑫杰 on 2022/5/17.
//
#include "iostream"
using namespace std;

class Time{
public:
    Time(int hour, int minute, int second);
    friend class Date;
private:
    int _hour,_minute,_second;
};

class Date{
public:
    Date(int year, int month, int day);
    void show(Time& time);
private:
    int _year,_month,_day;
};

Date::Date(int year, int month, int day) {
    _year=year;
    _month=month;
    _day=day;
}

void Date::show(Time &time) {
    cout<<_year<<"-"<<_month<<"-"<<_day
    <<" "<<time._hour<<":"<<time._minute
    <<":"<<time._second<<endl;
}

Time::Time(int hour, int minute, int second) {
    _hour=hour;
    _minute=minute;
    _second=second;
}

int main()
{
    Time time1(17,30,20);
    Date date(2019,10,31);
    date.show(time1);
    return 0;
}