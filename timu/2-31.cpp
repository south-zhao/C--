//
// Created by 赵鑫杰 on 2022/5/23.
//
#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
    for(int j = 1;j < 10;j++){
        for (int i = 1; i < j + 1; i++) {
            int a = i * j;
            cout << setw(7) << i << " * " << j << " = " << a;
            }
        cout << endl;
    }
    return 0;
}
