//
// Created by 赵鑫杰 on 2022/5/18.
//
#include "iostream"
using namespace std;

int main()
{
    int a[10], b[10];
    for (int i = 0; i < 10; i++) {
        a[i]=i*2-1;
        b[10-i-1]=a[i];
    }
    for (const auto &e:a)
        cout<<e<<" ";
    cout<<endl;
    for (int i = 0; i < 10; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}