//
// Created by 赵鑫杰 on 2022/5/17.
//
#include<iostream>
using namespace std;

class Student{
public:
    Student(string name);
    ~Student();
    static int sum;
private:
    string name;
};

Student::Student(string name) {
    this->name = name;
    sum++;
}

Student::~Student() {}
int Student::sum=0;
int main()
{
    Student stu1("zhang");
    Student stu2("li");
    cout<<"sum="<<stu1.sum<<endl;
    cout<<"sum="<<stu2.sum<<endl;
    cout<<"sum="<<Student::sum<<endl;
    cout<<"stu2="<< sizeof(stu2)<<endl;
    cout<<"stu1="<< sizeof(stu1)<<endl;
    return 0;
}