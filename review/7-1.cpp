//
// Created by 赵鑫杰 on 2022/8/17.
//
#include "iostream"
#include "cmath"

using namespace std;

class Point{
public:
    void initPoint(float x=0, float y=0){ this->x = x;this->y = y;}
    void move(float offX, float offY){x+=offX;y+=offY;}
    float getX() const{return x;}
    float getY() const{return y;}
private:
    float x,y;
};

class Rec:public Point{
public:
    void initRec(float x, float y, float w, float h){
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    float getH() const{return h;}
    float getW() const{return w;}
private:
    float w, h;
};

int main(){
    Rec rect;
    rect.initRec(2, 3, 20, 10);
    rect.move(3, 2);
    cout<<rect.getX()<<" "<<rect.getY()<<" "<<rect.getW()<<" "<<rect.getH();
    return 0;
}

























