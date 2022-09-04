//
// Created by 赵鑫杰 on 2022/5/30.
//
#include "iostream"
#include "iomanip"
using namespace std;

void tran(int a[][3], int  row)
{
    int t;
    for (int i = 0; i < row; i++) {
        for (int j = i; j < 3; j++) {
            t = a[i][j] ;
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
}

int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    for (auto & i : a) {
        for (int j : i) {
            cout<<setw(4)<<j;
        }
        cout<<endl;
    }
    tran(a, 3);
    cout<<"转置后的矩阵:"<<endl;
    for (auto & i : a) // for (int i = 0; i < 3; i++)
    {
        for (int j : i) // for (int j = 0; j < 3; j++)
        {
            cout<<setw(4)<<j;
        }
        cout<<endl;
    }
    return 0;
}


