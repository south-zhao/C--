//
// Created by 赵鑫杰 on 2022/5/21.
//
#include "iostream"
using namespace std;

class Stu
{
public:
    void setG(string grade);
    string getG();
    void setN(string name);
    string getN();
protected:
    string _grade;
private:
    string _name;
};

void Stu::setG(string grade) {
    _grade = grade;
}

string Stu::getG() {
    return _grade;
}

void Stu::setN(string name) {
    _name = name;
}

string Stu::getN() {
    return _name;
}

class Un:public Stu
{
public:
    Un(string major);
    void show();
private:
    string _major;
};

Un::Un(string major) {
    _major = major;
}

void Un::show() {
    cout<<"姓名:"<<getN()<<endl;
    cout<<"年级:"<<getG()<<endl;
    cout<<"专业:"<<_major<<endl;
}

int main()
{
    Un stu1("计算机");
    stu1.setG("大三");
    stu1.setN("张三");
    stu1.show();
    system("pause");
    return 0;
}
