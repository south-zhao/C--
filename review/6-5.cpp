//
// Created by 赵鑫杰 on 2022/6/1.
//
#include "iostream"

using namespace std;
int main()
{
    int i;
    int b = 5;
    // 引用传递  把i的值传给*p，地址传给p
    int *p = &i;
    i =10;
    cout<<i<<endl;
    cout<<"*p= "<<*p<<endl;
    cout<<"p = "<<p<<endl;
    int *c;
    c = p;
    cout<<"*c = "<<*c<<endl;
    const int *p1 = &i;
    cout<<"*p1= "<<*p1<<endl;
    cout<<"p1 = "<<p1<<endl;
    //常指针不能通过本身更改值
//    * p1 = 1;
    int * const p2 = &i;
    cout<<"*p2= "<<*p2<<endl;
    cout<<"p2 = "<<p2<<endl;
    // 指针常量值不能更改
//    p2 = &b;
    return 0;
}