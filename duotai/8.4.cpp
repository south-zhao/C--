//
// Created by 赵鑫杰 on 2022/6/24.
//
#include "iostream"

using namespace std;

class Base1{
public:
    virtual void display() const;
protected:
    int a=3;
};

void Base1::display() const {
    cout<<"Base1::display()"<<a<<endl;
}

class Base2:public Base1{
public:
    void display() const;
};

void Base2::display() const {
    cout<<"Base2::display()"<<a<<endl;
}

class Derived: public Base2{
public:
    void display() const;
};

void Derived::display() const {
    cout<<"Derived::display()"<<a<<endl;
}

void fun(Base1 *p){
    p->display();
}

int main()
{
    Base1 base1;
    Base2 base2;
    Derived derived;
    fun(&base1);
    fun(&base2);
    fun(&derived);
    return 0;
}

//
//class Base1{
//public:
//    virtual void display() const = 0;
//};
//
//class Base2:public Base1{
//public:
//    void display() const override;
//};
//
//void Base2::display() const {
//    cout<<"Base2::display()"<<endl;
//}
//
//class Derived: public Base2{
//public:
//    void display() const override;
//};
//
//void Derived::display() const {
//    cout<<"Derived::display()"<<endl;
//}
//
//void fun(Base1 *p){
//    p->display();
//}
//
//int main()
//{
//    Base2 base2;
//    Derived derived;
//    fun(&base2);
//    fun(&derived);
//    return 0;
//}



