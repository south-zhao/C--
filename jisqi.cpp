//
// Created by ???ν? on 2022/5/21.
//
#include "iostream"
using namespace std;

int main()
{
    double num1 = 0.0;
    double num2 = 0.0;
    char a = 0;
    cout<<"输入算式:\n";
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
                cout<<"error,???????????\n";
            else
                cout<<" = "<<num1 / num2<<endl;
            break;
        default:
            cout<<"error\n";
            break;
    }
//    system("pause");
    return 0;
}