//
// Created by ���ν� on 2022/5/21.
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
    cout<<"����:"<<getN()<<endl;
    cout<<"�꼶:"<<getG()<<endl;
    cout<<"רҵ:"<<_major<<endl;
}

int main()
{
    Un stu1("�����");
    stu1.setG("����");
    stu1.setN("����");
    stu1.show();
    system("pause");
    return 0;
}
