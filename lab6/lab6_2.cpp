//
// Created by 赵鑫杰 on 2022/6/1.
//
#include "iostream"

using namespace std;

void tran(int *p)
{
    int m;
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            m = *(p+3*i+j);
            *(p+3*i+j) = *(p+3*j+i);
            *(p+3*j+i) = m;
        }
    }
}


int main()
{   int *p;
    p = new int [9];
    int *t;
    t = &p[0];
    for (int i = 0; i < 9; i++)
        p[i] = i + 1;
    for (int i = 0; i < 9; i++) {
        cout << p[i]<<"  ";
        if ((i+1) % 3 == 0)
            cout<<endl;
    }
    tran(t);
    cout<<"转置后的3*3矩阵："<<endl;
    for (int i = 0; i < 9; i++) {
        cout << p[i]<<"  ";
        if ((i+1) % 3 == 0)
            cout<<endl;
    }
    return 0;
}



