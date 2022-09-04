//
// Created by 赵鑫杰 on 2022/6/3.
//
#include "iostream"
#include "cstring"
using namespace std;

class Date{
public:
    Date(int year, int month, int day);
    void show() const;
    ~Date()= default;
private:
    int year, month, day;
};

Date::Date(int year, int month, int day): year(year), month(month), day(day){}

inline void Date::show() const {
    cout<<"出生日期:\t"<<year<<"-"<<month<<"-"<<day<<endl;
}

class Sex{
public:
    Sex(char[]);
    void re_show1() {cout<<"性别:\t"<<sex<<endl;}
    ~Sex()= default;
private:
    char sex[3];
};

Sex::Sex(char s[]){
    strcpy(sex, s);
}

class People{
private:
    Date birthday;
    char id[16];
    char name[11];
    char number[7];
    Sex sex;
public:
    People(int year, int month, int day, char s[], char i[] = "3627889328", char n[] = "张三", char nu[] = "12337");
    People(People &);
    void re_show();
    ~People()= default;
};
People::People(int year, int month, int day, char s[], char i[], char n[], char nu[]): birthday(year, month, day), sex(s) {
    strcpy(id, i);
    strcpy(name, n);
    strcpy(number, nu);
}

inline void People::re_show() {
    cout<<"身份证号:\t"<<id<<endl<<"姓名:\t"<<name<<endl<<"编号:\t"<<number<<endl;
    sex.re_show1();
    birthday.show();
}

People::People(People &p): birthday(p.birthday), sex(p.sex) {
    strcpy(id, p.id);
    strcpy(name, p.name);
    strcpy(number, p.number);
}
int main(){
    People peo(2004, 3, 21, "f", "341256", "zhang", "7428");
    People peo1(peo);
    peo.re_show();
    cout<<"--------------"<<endl;
    peo1.re_show();
    return 0;
}
