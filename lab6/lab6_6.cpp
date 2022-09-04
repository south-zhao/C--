//
// Created by 赵鑫杰 on 2022/6/1.
//
#include "iostream"

using namespace std;

class Employee{
private:
    string name;
    string address;
    string city;
    string rank;
    string sex;
    int post, age, phone;
public:
    // Employee(string n, string a, string c, int p, int ag, int ph, string r, string s);
    void set();
    void change_name(string n, string a, string c, int p, int ag, int ph, string r, string s);
    void display();
};

void Employee::set() {
    cout<<"请输入:"<<endl;
    cout<<"姓名:";
    cin>>name;
    cout<<"地址:";
    cin>>address;
    cout<<"城市:";
    cin>>city;
    cout<<"邮编:";
    cin>>post;
    cout<<"年龄:";
    cin>>age;
    cout<<"电话:";
    cin>>phone;
    cout<<"知识水平:";
    cin>>rank;
    cout<<"性别:";
    cin>>sex;
}


void Employee::change_name(string n, string a, string c, int p, int ag, int ph, string r, string s)
{   name = n;
    address = a;
    city = c;
    post = p;
    age = ag;
    phone = ph;
    rank = r;
    sex = s;
}

void Employee::display() {
    cout<<"姓名:\t"<<name<<"\t";
    cout<<"地址:\t"<<address<<"\t";
    cout<<"城市:\t"<<city<<"\t";
    cout<<"邮编:\t"<<post<<"\t";
    cout<<"年龄:\t"<<age<<"\t";
    cout<<"电话:\t"<<phone<<"\t";
    cout<<"知识水平:\t"<<rank<<"\t";
    cout<<"性别:\t"<<sex<<"\t"<<endl;
}

int main()
{
    Employee a[5];
    for (auto & i : a)
        i.set();
    for (auto & i : a)
        i.display();
    cout<<"------------"<<endl;
    for (auto & i : a)
    {i.change_name("张三", "北大街", "西安", 2368, 38, 1382, "本科", "男");
        i.display();}
    return 0;
}
