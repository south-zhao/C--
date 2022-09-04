//
// Created by 赵鑫杰 on 2022/5/23.
//
#include "iostream"
#include <ctime>
using namespace std;

int main()
{
    srand((int) time(0));
    int a = 1 + rand() % 100;
    int i = 0;
    int b;
    cout<<"请输入一个1-100之间的数字:";
    cin>>b;
    do {
        if (b < a)
            cout<<"太小啦！"<<endl;
        else
            cout<<"太大了"<<endl;
        i ++;
        cout<<"请重新输入:";
        cin>>b;
    } while (b != a);
    cout<<"恭喜你答对了！"<<endl;
    cout<<"你一共猜了"<<i<<"次"<<endl;
    return 0;
}
