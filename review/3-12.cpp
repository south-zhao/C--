//
// Created by 赵鑫杰 on 2022/8/11.
//
#include "iostream"
#include "iomanip"

using namespace std;

// 引用传递
//void swap(int &a, int &b){
//    int t = a;
//    a = b;
//    b = t;
//}


//前一个是值传递   后一个是引用传递  用&
void fiddle(int a, int &b){
    a += 100;
    b += 100;
    cout<<"The values are:";
    cout<<setw(5)<<a;
    cout<<setw(5)<<b<<endl;
}

int main(){
    int x = 5, y = 10;
    cout<<"x="<<x<<"    y="<<y<<endl;
    cout<<"The values are:";
    cout<<setw(5)<<x;
    cout<<setw(5)<<y<<endl;
    swap(x, y);
//    fiddle(x, y);
    cout<<"The values are:";
    cout<<setw(5)<<x;
    cout<<setw(5)<<y<<endl;
    cout<<"x="<<x<<"    y="<<y<<endl;
    return 0;
}

//int main(){
//    int n = 3;
//    int &r = n;
//    cout<<r<<endl;
//    n = 6;
//    cout<<r<<endl;
//    r = 8;
//    cout<<n<<endl;
//    return 0;
//}

//int main(){
//    int a = 3;
//    const int &b = a;
////    int &r = b;  引用的只能为变量，不能为常量
//    a = 6;
//    cout<<b<<endl;
//    cout<<r<<endl;
//    return 0;
//}









