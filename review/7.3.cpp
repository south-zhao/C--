//
// Created by 赵鑫杰 on 2022/6/8.
//
#include "iostream"

using namespace std;

class Base1{
public:
    void display() const {cout<<"Base1"<<endl;}
};

class Base2: public Base1{
public:
    void display() const {cout<<"Base2"<<endl;}
};

class Derived:public Base2{
public:
    void display() const {cout<<"Derived"<<endl;}
};

void fun(Base1 *p){
    p->display();
}

int main()
{
    Base1 base1;
    Base2 base2;
    Derived derived;

    fun(&base1);
    fun(&base2);
    fun(&derived);

    return 0;
}