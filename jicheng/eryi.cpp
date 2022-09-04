//
// Created by 赵鑫杰 on 2022/5/29.
//
#include "iostream"
#include "string"

using namespace std;

class Teacher{
public:
    Teacher(string n, int a, string t)
    {
        name = n;
        age = a;
        title = t;
    }
    void show_T()
    {
        cout<<"姓名:"<<name<<endl;
        cout<<"年龄:"<<age<<endl;
        cout<<"职称:"<<title<<endl;
    }
protected:
    string name;
    int age;
    string title;
};

class Student{
public:
    Student(string n, char s, float sco)
    {
        namel = n;
        sex = s;
        score = sco;
    }
    void show_S()
    {
        cout<<"姓名:"<<namel<<endl;
        cout<<"性别:"<<sex<<endl;
        cout<<"分数:"<<score<<endl;
    }
protected:
    string namel;
    char sex;
    float score;
};

class Graduate: public Teacher, public Student
{
public:
    Graduate(string n, int a, char s, string t, float sco, float w):
            Teacher(n, a, t), Student(n, s, sco), wage(w){}
    void show_G()
    {
        cout<<"姓名:"<<name<<endl;
        cout<<"年龄:"<<age<<endl;
        cout<<"职称:"<<title<<endl;
        cout<<"性别:"<<sex<<endl;
        cout<<"分数:"<<score<<endl;
        cout<<"工资:"<<wage<<endl;
    }
private:
    float wage;
};

int main()
{
    Graduate g("张三", 28, 'M', "助教", 95, 3000.5);
    g.show_G();
    return 0;
}