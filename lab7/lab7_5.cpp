//
// Created by 赵鑫杰 on 2022/6/15.
//
#include "iostream"

using namespace std;

class Shape{
public:
    Shape()= default;
    ~Shape()= default;
    virtual float getArea() {return -1;}
};

class Circle:public Shape{
public:
    Circle(float radius): itsRadius(radius){}
    ~Circle()= default;
    float getArea(){return 3.14*itsRadius*itsRadius;}
private:
    float itsRadius;
};

class Rectangle:public Shape{
public:
    Rectangle(float len, float width): itsLength(len), itsWidth(width) {}
    ~Rectangle(){}
    virtual float getArea() {return itsLength*itsWidth;}
    virtual float getLength() {return itsLength;}
    virtual float getWidth() {return itsWidth;}
private:
    float itsLength;
    float itsWidth;
};

class Square:public Rectangle{
public:
    Square(float len);
    ~Square(){}
};

Square::Square(float len): Rectangle(len, len) {}

int main()
{
    Shape* sp;
    sp=new Shape();
    cout<<sp->getArea()<<endl;
    delete sp;
    sp=new Circle(5);
    cout<<sp->getArea()<<endl;
    delete sp;
    sp=new Rectangle(4,6);
    cout<<sp->getArea()<<endl;
    delete sp;
    sp = new Square(5);
    cout<<sp->getArea()<<endl;
    delete sp;
    return 0;
}

