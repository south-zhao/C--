//
// Created by 赵鑫杰 on 2022/5/21.
//
#include "iostream"
using namespace std;

int main()
{
    double num1 = 0.0;
    double num2 = 0.0;
    char a = 0;
    cout<<"请输入算式:\n";
    cin>>num1>>a>>num2;
    switch (a) {
        case '+':
            cout<<" = "<<num1 + num2<<endl;
            break;
        case '-':
            cout<<" = "<<num1 - num2<<endl;
            break;
        case '*':
            cout<<" = "<<num1 * num2<<endl;
            break;
        case '/':
            if(num2 == 0)
                cout<<"error,除数不能为零\n";
            else
                cout<<" = "<<num1 / num2<<endl;
            break;
        default:
            cout<<"error\n";
            break;
    }
    return 0;
}