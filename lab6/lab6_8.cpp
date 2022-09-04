//
// Created by 赵鑫杰 on 2022/6/2.
//
#include "iostream"

using namespace std;

class SimpleCircle{
private:
    int * itsRadius;
public:
    SimpleCircle();
    SimpleCircle(int r);
    void show();
    ~SimpleCircle();
};

SimpleCircle::SimpleCircle() {
    itsRadius = new int(10);
}

SimpleCircle::SimpleCircle(int r) {
    itsRadius = new int(r);
}

void SimpleCircle::show() {
    cout<<"半径为:"<<*itsRadius<<endl;
}

SimpleCircle::~SimpleCircle() {}

int main()
{
    SimpleCircle r1, r2(5);
    r1.show();
    r2.show();
    return 0;
}
