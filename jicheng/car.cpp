//
// Created by 赵鑫杰 on 2022/5/24.
//
#include "iostream"
#include "string"
using namespace std;

class Car{
public:
    void show();
    void set(string n, int s, string c);
private:
    string name;
    int sell;
    string color;
};
void Car::set(string n, int s, string c) {
    name = n;
    sell = s;
    color = c;
}
void Car::show() {
    cout<<"name:\t"<<name<<endl;
    cout<<"sell:\t"<<sell<<endl;
    cout<<"color:\t"<<color<<endl;
}

class Car_1:public Car{
public:
    void show_1();
private:
    float volume = 1.5;
    char addr[20] = "中国-上海";
};

void Car_1::show_1() {
    cout<<"volume:\t"<<volume<<endl;
    cout<<"addr:\t"<<addr<<endl;
}
int main()
{
    Car_1 C;
    C.set("大众", 110000, "黑色");
    C.show();
    C.show_1();
    return 0;
}