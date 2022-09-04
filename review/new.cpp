//
// Created by 赵鑫杰 on 2022/5/24.
//
#include "iostream"
using namespace std;

class Base{
private:
    int x;
public:
    Base(int x) { this->x = x;}
    int fun() {return x;}
};

int main()
{
    Base *p = new Base(100);
    if (!p)
    {
        cout<<"error"<<endl;
        return 1;
    }
    cout<<"x = "<<p->fun()<<endl;
    delete p;
    return 0;
}