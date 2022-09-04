//
// Created by 赵鑫杰 on 2022/6/4.
//
#include "iostream"
using namespace std;

class Point{
public:
    void initPoint(float x=0, float y=0) {this->x=x;this->y=y;}
    void move(float offX, float offY) {x+=offX;y+=offY;}
    float getX() const {return x;}
    float getY() const {return y;}
private:
    float x, y;
};

class R: private Point{
public:
    void initR(float x, float y, float w, float h){
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    void move(float offX, float offY) {Point::move(offX, offY);}
    float getX() const {return Point::getX();}
    float getY() const {return Point::getY();}
    float getW() const {return w;}
    float getH() const {return h;}
private:
    float w,h;
};

int main()
{
    R rect;
    rect.initR(2, 3, 20, 10);
    rect.move(3, 2);
    cout<<rect.getX()<<endl;
    cout<<rect.getY()<<endl;
    cout<<rect.getW()<<endl;
    cout<<rect.getH()<<endl;
    return 0;

}
