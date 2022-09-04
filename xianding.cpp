//
// Created by 赵鑫杰 on 2022/5/24.
//
#include "iostream"
using namespace std;
int x = 11;
int main()
{
    int x = 22;
    cout<<::x<<endl;
    cout<<"-"<<x<<endl;
    ::x = 33;
    cout<<::x<<endl;
    cout<<"-"<<x<<endl;
    return 0;
}
