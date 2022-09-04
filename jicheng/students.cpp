//
// Created by 赵鑫杰 on 2022/5/24.
//
#include "iostream"
#include "string"

using namespace std;

class People{
public:
    void set()
    {
        cout<<"请输入:"<<endl;
        cout<<"姓名:";
        cin>>name;
        cout<<"年龄:";
        cin>>age;
        cout<<"性别:";
        cin>>sex;
    }
    void show()
    {
        cout<<"姓名:\t"<<name<<endl;
        cout<<"年龄:\t"<<age<<endl;
        cout<<"性别:\t"<<sex<<endl;
    }
private:
    string name;
    int age;
    char *sex;
};

class Students:public People{
public:
    void show_1()
    {
        cout<<"身高:\t"<<height<<endl;
        cout<<"成绩:\t"<<score<<endl;
    }
private:
    float height = 170.5;
    float score = 88.9;
};

int main()
{
    Students stu;
    stu.set();
    stu.show();
    stu.show_1();
    return 0;
}