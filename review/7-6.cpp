//
// Created by 赵鑫杰 on 2022/9/1.
//
#include "iostream"

using namespace std;


class Base0 {
public:
    int var0;
    void fun(){cout<<"Member of Base1"<<endl;}
};

class Base1:virtual public Base0{
public:
    int var1;
};

class Base2:virtual public Base0{
public:
    int var2;
};

class Derived:public Base1, public Base2{
public:
    int var;
    void fun() {cout<<"Member of Derived"<<endl;}
};

int main(){
    Derived d;
    d.var0 = 2;
    d.Base0::fun();
    d.var = 5;
    d.fun();
    return 0;
}
















