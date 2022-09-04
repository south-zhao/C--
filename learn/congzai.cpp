//
// Created by 赵鑫杰 on 2022/5/24.
//
#include "iostream"

using namespace std;

class Circle{
public:
    Circle();
    Circle(float pi, float r):PI(pi), Radius(r) { }
    float area();
private:
    float PI;
    float Radius;
};

Circle::Circle() {
    PI = 3.14;
    Radius = 3.5;
}

float Circle::area() {
    return PI*Radius*Radius;
}

int main()
{
    Circle cl;
    cout<<"面积:"<<cl.area()<<endl;
    Circle c2(3.14, 10);
    cout<<"面积:"<<c2.area()<<endl;
    return 0;
}