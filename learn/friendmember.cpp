//
// Created by 赵鑫杰 on 2022/5/17.
//
#include "iostream"
#include "math.h"
using namespace std;

class Point;
class Circle{
public:
    float getArea(Point &p1,Point &p2);
private:
    const float PI=3.14;
};

class Point{
    friend float Circle::getArea(Point &p1, Point &p2);
public:
    Point(float x,float y);
    ~Point();
private:
    float _x;
    float _y;
};

Point::Point(float x, float y):_x(x),_y(y) {
    cout<<"初始化坐标"<<endl;
}

Point::~Point() {}

float Circle::getArea(Point &p1, Point &p2) {
    double x= abs(p1._x-p2._x);
    float y= abs(p1._y-p2._y);
    float len= sqrt(x*x+y*y);
    cout<<"获取坐标"<<len<<endl;
    return len*len*PI;
}

int main()
{
    Point p1(5, 5);
    Point p2(10, 10);
    Circle circle;
    float area= circle.getArea(p1, p2);
    cout<<"面积:"<<area<<endl;
    return 0;
}
