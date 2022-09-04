//
// Created by 赵鑫杰 on 2022/5/18.
//
#include<iostream>
#include<cmath>
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;
    int totalDays;
public:
    Date(int year, int month, int day);//用年、月、日构造日期
    int getYear() const { return year; }

    int getMonth() const { return month; }

    int getDay() const { return day; }

    int getMaxDay() const;

    bool isLeapYear() const {
        return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    }

    void show() const;

    int distance(const Date &date) const { return totalDays - date.totalDays; }
};
const int DAYS_BEFORE_MONTH[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
Date::Date(int year, int month, int day):year(year), month(month), day(day)
{
    if(day<=0||day>getMaxDay()) {
        cout << "Invalid date:";
        show();
        cout << endl;
        exit(1);
    }
    int years=year-1;
    totalDays=years*365+years/4-years/100+years/400 +DAYS_BEFORE_MONTH[month-1]+day;
    if(isLeapYear() && month>2) totalDays++;
};

int Date::getMaxDay() const {
    if (isLeapYear() && month == 2)
        return 29;
    else
        return DAYS_BEFORE_MONTH[month]-DAYS_BEFORE_MONTH[month-1];
}

void Date::show() const {
    cout<<getYear()<<"-"<<getMonth()<<"-"<<getDay();
}

class Accout{
public:
    Accout(const Date &date, const string id, double rate);
    const string &getId() const {return id;}
    double getBa() const{return ba;}
    double getRate() const{return rate;}
    static double getTotal(){return total;}
    void deposit(const Date &date, double amount, const string &desc);
    void withdraw(const Date &date, double amount, const string &desc);
    void settle(const Date &date);
    void show() const;
private:
    string id;
    double ba;
    double rate;
    Date lastdate;
    double ac;
    static double total;
    void recond(const Date & date,double amount, const string &desc);
    void error(const string &msg) const;
    double acl(const Date &date) const{
        return ac+ba*date.distance(lastdate);
    }
};

double Accout::total=0;
Accout::Accout(const Date &date, const string id, double rate)
        :id(id), ba(0), rate(rate), lastdate(date), ac(0){
    date.show();
    cout<<"\t#"<<id<<"is create"<<endl;
}

void Accout::recond(const Date &date, double amount, const string &desc) {
    ac=acl(date);
    lastdate=date;
    amount=floor(amount*100+0.5)/100;
    ba+=amount;
    total+=amount;
    date.show();
    cout<<"\t#"<<id<<"\t"<<amount<<"\t"<<ba<<"\t"<<desc<<endl;
}

void Accout::error(const string &msg) const {
    cout<<"Error(#"<<id<<"):"<<msg<<endl;
}

void Accout::deposit(const Date &date, double amount, const string &desc) {
    recond(date, amount, desc);
}

void Accout::withdraw(const Date &date, double amount, const string &desc) {
    if(amount>getBa())
        error("not enough money");
    else
        recond(date, -amount, desc);
}

void Accout::settle(const Date &date) {
    double interest=acl(date)*rate/date.distance(Date(date.getYear()-1, 1, 1));
    if(interest!=0)
        recond(date, interest, "interest");
    ac=0;
}

void Accout::show() const{
    cout<<id<<"\tba:"<<ba;
}

int main(){
    Date date(2008, 11, 1);
    Accout accouts[]={
            Accout(date, "03755217", 0.015),
            Accout(date, "02342342", 0.015)
    };
    const int n= sizeof(accouts) / sizeof(Accout);
    accouts[0].deposit(Date(2008, 11, 5), 5000, "salary");
    accouts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
    accouts[0].deposit(Date(2008, 12, 5), 5500, "salary");
    accouts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");
    cout<<endl;
    for (int i = 0; i < n; i++) {
        accouts[i].settle(Date(2009, 1, 1));
        accouts[i].show();
        cout<<endl;
    }
    cout<<"Total:"<<Accout::getTotal()<<endl;
    return 0;
}
