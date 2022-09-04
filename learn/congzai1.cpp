//
// Created by 赵鑫杰 on 2022/5/24.
//
#include "iostream"
using namespace std;

class Box{
public:
    Box(int h = 10, int w = 10, int len = 10);
    Box(const Box& b);
    int volume();
    ~Box();
private:
    int height;
    int width;
    int length;
};
Box::Box(const Box &b) {
    height = b.height;
    width = b.width;
    length = b.length;
}
Box::Box(int h, int w, int len) {
    height = h;
    width = w;
    length = len;
}
int Box::volume() {
    return (height*width*length);
}
Box::~Box() {
    cout<<"调用析构"<<Box::volume()<<endl;
}
int main()
{
    cout<<"没有实参"<<endl;
    Box box1(21, 23, 34);
    cout<<box1.volume()<<endl;
    Box box2 = box1;
    cout<<box2.volume()<<endl;
    Box box3(10,15);
    cout<<box3.volume()<<endl;
    return 0;
}