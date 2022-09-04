//
// Created by 赵鑫杰 on 2022/5/29.
//
#include "iostream"

using namespace std;
class Base{
public:
    virtual void fun()
    {
        cout<<"你多大了"<<endl;
    }
};

class Derive:public Base
{
public:
    void fun()
    {
        cout<<"19"<<endl;
    }
};

int main()
{
    Derive d;
    Base b;
    Base *p = &b;
    b.fun();
    p = &d;
    p->fun();
    return 0;
}
