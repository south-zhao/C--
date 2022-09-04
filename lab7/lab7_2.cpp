//
// Created by 赵鑫杰 on 2022/6/15.
//
#include "iostream"

using namespace std;

class BaseClass{
public:
    BaseClass(int num): Number(num) {cout<<"BaseClass:"<<Number<<endl;}
    ~BaseClass() {cout<<"De"<<endl;}
private:
    int Number;
};

class Derivedclass: public BaseClass{
public:
    Derivedclass(int i): BaseClass(i) {}
};

int main()
{
    Derivedclass obj(3);
    return 0;
}
