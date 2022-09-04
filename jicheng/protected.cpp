//
// Created by 赵鑫杰 on 2022/5/25.
//
#include "iostream"
#include "string"

using namespace std;
class People{
public:
    void show();
protected:
    int num = 10110;
    string name = "小李";
    char *sex = "女";
};

void People::show() {
    cout<<"num:\t"<<num<<endl;
    cout<<"name:\t"<<name<<endl;
    cout<<"sex:\t"<<sex<<endl;
}

class Student:protected People
{
public:
    void show_1();
private:
    int age = 17;
    string addr = "陕西师范大学";
};

void Student::show_1() {
    cout<<"num:\t"<<num<<endl;
    cout<<"name:\t"<<name<<endl;
    cout<<"sex:\t"<<sex<<endl;
    cout<<"age:\t"<<age<<endl;
    cout<<"addr:\t"<<addr<<endl;
}

int main()
{
    Student stu;
    stu.show_1();
    return 0;
}