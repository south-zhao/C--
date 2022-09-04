//
// Created by 赵鑫杰 on 2022/6/19.
//
#include "iostream"
#include "cstring"
using namespace std;

class Date{
public:
    Date(int year, int month, int day);

    Date();

    void show() const;
    ~Date()= default;

protected:
    int year, month, day;
};

Date::Date(int year, int month, int day): year(year), month(month), day(day){}

inline void Date::show() const {
    cout<<"出生日期:\t"<<year<<"-"<<month<<"-"<<day<<endl;
}

Date::Date() {}

class Sex{
public:
    Sex(char[]);

    Sex();

    void re_show1() {cout<<"性别:\t"<<sex<<endl;}
    ~Sex()= default;

protected:
    char sex[3];
};

Sex::Sex(char s[]){
    strcpy(sex, s);
}

Sex::Sex() {}

class People{
protected:
    Date birthday;
    char id[16];
    char name[11];
    char number[7];
    Sex sex;
public:
    People() {}
    People(int year, int month, int day, char s[], char [] = "3627889328", char [] = "张三", char [] = "12337");
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

class Student:virtual public People{
protected:
    char classNO[7];
public:
    Student(int year, int month, int day, char s[], char i[], char n[], char nu[], char c[]):
    People(year, month, day, s, i, n, nu)
            {
                strcpy(classNO, c);
            }

    Student() {}

    void show_s() {
        cout<<"班号:\t"<<classNO<<endl;
    }
};

class Teacher:virtual public People{
protected:
    char principalship[11];
    char department[21];
public:
    Teacher(int year, int month, int day, char s[], char i[], char n[], char nu[], char p[], char d[]):
            People(year, month, day, s, i, n, nu){
        strcpy(principalship, p);
        strcpy(department, d);
    }

    Teacher() {}

    void show_T() {
        cout<<"职务:\t"<<principalship<<endl;
        cout<<"部门:\t"<<department<<endl;
    }
};

class Graduate:public Student{
protected:
    char subject[21];
    char adviser;
public:
    Graduate(int year, int month, int day, char s[], char i[], char n[], char nu[], char c[], char sub[], char a):
            People(year, month, day, s, i, n, nu),adviser(a)
    {
        strcpy(subject, sub);
        strcpy(classNO, c);
    }

    Graduate() {}

    void show_G() {
        cout<<"专业:\t"<<subject<<endl;
        cout<<"导师:\t"<<adviser<<endl;
    }
};

class Bo:public Graduate, public Teacher{
public:
    Bo(int year, int month, int day, char s[], char i[], char n[], char nu[], char p[], char d[],
       char c[], char sub[], char a): People(year, month, day, s, i, n, nu){
        adviser = a;
        strcpy(subject, sub);
        strcpy(classNO, c);
        strcpy(principalship, p);
        strcpy(department, d);
    }
    void shoe_B() {
        cout<<"职务:\t"<<principalship<<endl;
        cout<<"部门:\t"<<department<<endl;
        cout<<"班号:\t"<<classNO<<endl;
        cout<<"专业:\t"<<subject<<endl;
        cout<<"导师:\t"<<adviser<<endl;
    }
};

int main(){
    People peo(2004, 3, 21, "f", "341256", "zhang", "7428");
    peo.re_show();
    cout<<"--------------"<<endl;
    Student stu(2004, 3, 21, "f", "341256", "zhang", "7428", "343432");
    stu.re_show();
    stu.show_s();
    cout<<"--------------"<<endl;
    Teacher tea(2004, 3, 21, "f", "341256", "zhang", "7428", "辅导员", "教务处");
    tea.re_show();
    tea.show_T();
    cout<<"--------------"<<endl;
    Graduate gra(2004, 3, 21, "f", "341256", "zhang", "7428", "343432", "计算机", 'w');
    gra.re_show();
    gra.show_s();
    gra.show_G();
    cout<<"--------------"<<endl;
    Bo b(2004, 3, 21, "f", "341256", "zhang", "7428", "辅导员", "教务处", "343432", "计算机", 'w');
    b.re_show();
    b.shoe_B();
    return 0;
}

