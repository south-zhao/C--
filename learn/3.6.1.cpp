//
// Created by 赵鑫杰 on 2022/5/31.
//
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    int a[2][3] = {{12,58,9},{24,37,1}};
    int t;
    for (int i = 2; i > 0; i--) {
        for (int j = 1; j >= 0; j--) {
            t = a[j][i];
            a[j][i] = a[j][i-1];
            a[j][i-1] = t;
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
    return 0;
}