//
// Created by 赵鑫杰 on 2022/8/12.
//
#include "iostream"
//#include "iomanip"

using namespace std;

const double PI = 3.1415926;
//
//// 内联函数可以减少调用的过程
inline double calArea(double radius){
    return PI * radius * radius;
}
// 默认形参值
//int add(int x = 5, int y = 6){
//    return x + y;
//}

int main(){
    double r = 3.0;
    double area = calArea(r);
    cout<<area<<endl;
    return 0;
//    int a, b, c;
//    a = add(10, 20);
//    b = add(10);
//    c = add();
//    cout<<"a="<<a<<setw(5)<<"b="<<b<<setw(5)<<"c="<<c<<endl;
}



