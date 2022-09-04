//
// Created by 赵鑫杰 on 2022/6/1.
//
#include "iostream"
using namespace std;

int main()
{
    string a;
    string b;
    char c[100];
    cin>>a;
    cin>>b;
    a = a + b;
    for (int j = 0; (char) a.c_str()[j] != '\0'; j++)
        c[j] = (char) a.c_str()[j];
    cout<<a;
    return 0;
}