//
// Created by 赵鑫杰 on 2022/9/2.
//
#include "iostream"

using namespace std;

class Student{
private:
    static int count;
    string name;
    int id;
public:
    Student(string n, int i):name(n), id(i){
        count++;
        cout<<count<<endl;
    }

    void show() {
        cout<<name<<":"<<id<<endl;
    }

    static void showCount() {
        cout<<count<<endl;
    }
};

int Student::count = 0;

int main(){
    Student stu1("jfsjdf", 123);
    stu1.show();
    Student::showCount();
    Student stu2("hfds", 345);
    Student::showCount();
    return 0;
}


















