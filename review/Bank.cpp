//
// Created by 赵鑫杰 on 2022/9/2.
//
#include <mshtmlc.h>
#include "iostream"

using namespace std;

class Bank{
private:
    string name;  // 用户名
    int password;  //密码
    int money; // 金额
public:
    // 初始化账户
    Bank(){
        cout<<"请输入用户名:";
        cin>>name;
        cout<<"请输入密码:";
        cin>>password;
        cout<<"请输入初始金额:";
        cin>>money;
    }
    //获取存款
    int pr_money() const {
        return money;
    }
    //存款
    void save(int num) {
        money += num;
    }
    //取钱
    void get(int num) {
        money -= num;
    }
};

int main() {
    int num1;
    int num2;
    cout<<R"(|---------欢迎进入银行------|
|  1.登录                 |
|  2.退出                 |
|________________________|)";
    cout<<"\n输入对应功能前的数字:";
    cin>>num1;
    if (num1 == 1)
    {Bank user;
        while (TRUE){
            cout<<R"(|---------欢迎进入银行------|
|  1.存钱                 |
|  2.取钱                 |
|  3.查看余额              |
|  4.退出                 |
|________________________|)";
            cout<<"\n输入对应功能前的数字:";
            cin>>num2;
            if (num2 == 1)
            {
                int s_num;
                cout<<"请输入存钱金额:";
                cin>>s_num;
                user.save(s_num);
            }
            else if (num2 == 2)
            {
                int g_num;
                cout<<"请输入取钱金额:";
                cin>>g_num;
                user.get(g_num);
            }
            else if (num2 == 3)
            {
                int mon = user.pr_money();
                cout<<mon<<"\n";
            }
            else
                break;
        }
    }
    else
        return 0;
    return 0;
}








