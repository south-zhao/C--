//
// Created by 赵鑫杰 on 2022/6/1.
//
#include "iostream"

using namespace std;

int main()
{
    int a[] = {1, 0, 0};
    int b[] = {0, 1, 0};
    int c[] = {0, 0, 1};

    int *p[3] = {a, b, c};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<p[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}