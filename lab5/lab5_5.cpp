//
// Created by 赵鑫杰 on 2022/5/17.
//
#include<iostream>
using namespace std;

int main()
{
    int a[3][3],t;
    int *p;
    cout<<"请输入一个3*3的数组:"<<endl;
    for(int i=0;i<3;i++)
        for (int j = 0; j < 3; j++) {
            cin>>a[i][j];
        }
    p=&a[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3; j++) {
         t = *(p+3*i+j);
         *(p+3*i+j) = *(p+3*j+i);
         *(p+3*j+i) = t;
        }
    cout<<"输出一个转置后的3*3的数组:"<<endl;
    for(int i=0;i<3;i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j]<<" ";
        }
        cout << "\n";
    }
    return 0;
}