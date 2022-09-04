//
// Created by 赵鑫杰 on 2022/9/3.
//
#include "iostream"

using namespace std;

class A{
public:
    A(int i, int j):x(i), y(j) { }
    void show() const{
        cout<<x<<y<<endl;
    }
//private:
    int x, y;
};

int main(){
    const A a(3, 4);
//    a.x = 4;
    a.show();
    return 0;
}

























