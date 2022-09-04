//
// Created by 赵鑫杰 on 2022/6/1.
//
#include "iostream"
using namespace std;

int main()
{
    char a[200];
    char b[100];
    cin>>a;
    cin>>b;
    for (int i = 0; ; i++) {
        if (a[i] == '\0') {
            for (int j = 0; b[j] != '\0'; j++)
                a[i + j] = b[j];
            break;
        }
    }
    for (int i = 0; a[i] != '\0' ; i++) {
        cout<<a[i];
    }
    // strcat(a, b);
    // strcpy
    // strncpy需要手动加终止符复杂
    return 0;
}
