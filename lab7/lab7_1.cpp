//
// Created by 赵鑫杰 on 2022/6/15.
//
#include "iostream"

using namespace std;

class Animal{
public:
    int age;
};

class dog: public Animal{
public:
    void SetAge(int n) {age=n;}
    void show(){cout<<age;}
};
int main(){
    dog dog;
    dog.SetAge(5);
    dog.show();
    return 0;
}