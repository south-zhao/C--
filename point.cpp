//
// Created by 赵鑫杰 on 2022/5/25.
//
#include "iostream"

using namespace std;

class point{
public:
    point();
    point(int x, int y);
    ~point();
    void move(int newx, int newy);
    int getX() const {return x;}
    int getY() const {return y;}
private:
    int x, y;
};

point::point() {
    x = y = 0;
    cout<<"called;"<<endl;
}

point::point(int x, int y):x(x), y(y) {
    cout<<"2 called."<<endl;
}

point::~point() {
    cout<<"xigou"<<endl;
}

void point::move(int newx, int newy) {
    cout<<"xinjian ("<<newx<<", "<<newy<<")"<<endl;
    x = newx;
    y = newy;
}

int main()
{
    cout<<"Entering main,,,,,"<<endl;
    point a[2];

    for (int i = 0; i < 2; i++) {
        a[i].move(i+10, i+20);
    }
    cout<<"Exiting main ,,,,,"<<endl;
    return 0;
}
