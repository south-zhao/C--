//
// Created by 赵鑫杰 on 2022/5/28.
//
#include "iostream"
using namespace std;

class MyA{
public:
    MyA(int a, int b);
    ~MyA();
protected:
    int m_a;
    int m_b;
};

MyA::MyA(int a, int b): m_a(a), m_b(b){
    cout<<"MyA 构造函数"<<endl;
}

MyA::~MyA() {
    cout<<"MyA 析构函数"<<endl;
}

class MyB{
public:
    MyB(int c, int d);
    ~MyB();
protected:
    int m_c;
    int m_d;
};

MyB::MyB(int c, int d): m_c(c), m_d(d){
    cout<<"MyB 构造函数"<<endl;
}

MyB::~MyB() {
    cout<<"MyB 析构函数"<<endl;
}

class MyD:public MyA, public MyB
{
public:
    MyD(int a, int b, int c, int d, int e);
    ~MyD();
    void show();
private:
    int m_e;
};

MyD::MyD(int a, int b, int c, int d, int e): MyA(a, b), MyB(c, d), m_e(e){
    cout<<"导出构造函数"<<endl;
}

MyD::~MyD() {
    cout<<"导出析构函数"<<endl;
}

void MyD::show() {
    cout<<m_a<<", "<<m_b<<", "<<m_c<<", "<<m_d<<", "<<m_e<<endl;
}

int main()
{
    MyD c(1, 2, 3, 4, 5);
    c.show();
    return 0;
}