//
// Created by 赵鑫杰 on 2022/6/24.
//
#include "iostream"

using namespace std;

class Point{
public:
    Point(int x, int y):_x(x), _y(y) {}
    void show() const;
    Point& operator++();
    Point operator++(int);
    Point& operator--();
    Point operator--(int);
private:
    int _x, _y;
};

void Point::show() const {
    cout<<"("<<_x<<", "<<_y<<")"<<endl;
}

Point & Point::operator++() {
    _x++;
    _y++;
    return *this;
}

Point Point::operator++(int) {
    Point old = *this;
    ++(*this);
    return old;
}

Point & Point::operator--() {
    _x--;
    _y--;
    return *this;
}

Point Point::operator--(int) {
    Point old = *this;
    --(*this);
    return old;
}

int main()
{
    Point point(3, 5);
    point.show();
    cout<<"Point ++:";
    (point++).show();
    cout<<"++ Point:";
    (++point).show();
    cout<<"Point --:";
    (point--).show();
    cout<<"-- Point:";
    (--point).show();
    return 0;
}



