//
// Created by 赵鑫杰 on 2022/8/12.
//
#include "iostream"
//#include "iomanip"

using namespace std;

class Clock{
public:
    // 构造函数起初始化的作用，在创建对象的时候会自动调用
    Clock(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
//        cout<<"请输入小时:";
//        cin>>hour;
//        cout<<"请输入分钟:";
//        cin>>minute;
//        cout<<"请输入秒:";
//        cin>>second;
    }
    // 成员函数
    void setTime(int newH, int newM, int newS){
//        cout<<"请输入小时:";
//        cin>>hour;
//        cout<<"请输入分钟:";
//        cin>>minute;
//        cout<<"请输入秒:";
//        cin>>second;
        hour = newH;
        minute = newM;
        second = newS;
    }
    void showTime() const{
        cout<<"现在的时间:";
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
// 复制构造函数必须在有构造函数的前提下
    Clock(Clock &c){
        hour= c.hour;
        minute = c.minute;
        second = c.second;
        cout<<"Calling the copy"<<endl;
    }
//    析构函数先析构最后创建的对象，后进先析，先进后析
    ~Clock(){cout<<"xigou"<<hour;}
private:
    int hour, minute, second;
};

int main(){
    Clock clock(12, 23, 45);
//    clock.showTime();
    Clock c1 = clock;
    c1.showTime();
    clock.setTime(11, 23, 45);
//    clock.setTime();
    clock.showTime();
//    cout<<clock.hour<<setw(4)<<clock.minute<<setw(4)<<clock.second;
    return 0;
}


