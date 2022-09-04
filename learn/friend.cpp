//
// Created by 赵鑫杰 on 2022/5/17.
//
#include<iostream>
using namespace std;

class Circle{
    friend void getArea(Circle &circle);
private:
    float radius;
    const float PI = 3.14;
public:
    Circle(float radius);
    ~Circle();
};

Circle::Circle(float radius): radius(radius){
    cout<<"初始化圆的半径:"<<radius<<endl;
}

Circle::~Circle() {}

void getArea(Circle &circle)
{
    cout<<"圆的半径:"<<circle.radius<<endl;\
    cout<<"圆的面积:"<<circle.PI*circle.radius*circle.radius<<endl;
    cout<<"友元修改:"<<endl;
    circle.radius=1;
    cout<<"圆的半径:"<<circle.radius<<endl;
}

int main()
{
    Circle circle(10);
    getArea(circle);
    return 0;
}
