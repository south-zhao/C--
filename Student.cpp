//
// Created by south on 2022/9/15.
//
#include "iostream"

using namespace std;

class Student{
private:
    int id,age,math,English,China,computer,physical;
    string name,sex,class_name;
public:
    // 初始化信息
    Student(int id, string name, string class_name, string sex, int age, int math=0, int English=0,int China=0,int computer=0,int physical=0):
            id(id), name(name), class_name(class_name), sex(sex), age(age), math(math), English(English), China(China), computer(computer), physical(physical)
    {
        cout<<"学号为"<<id<<"的学生"<<name<<"的信息已创建完成"<<endl;
    }
    void select_main(int num) {
        switch (num) {
            case 1:
                cout<<"请输入新的内容:";
                cin>>id;
                break;
            case 2:
                cout<<"请输入新的内容:";
                cin>>name;
                break;
            case 3:
                cout<<"请输入新的内容:";
                cin>>class_name;
                break;
            case 4:
                cout<<"请输入新的内容:";
                cin>>sex;
                break;
            case 5:
                cout<<"请输入新的内容:";
                cin>>age;
                break;
            default:
                cout<<"error";
                break;
        }
    }
    // 更改信息
    void repair() {
        int num;
        cout<<R"(|------------------------|
|  1.学号                 |
|  2.姓名                 |
|  3.班级                 |
|  4.性别                 |
|  5.年龄                 |
|  6.退出                 |
|________________________|)";
        while (true)
        {
            cout<<endl<<"选择你想更改的信息：";
            cin>>num;
            if(num != 6)
                select_main(num);
            else
                break;
        }
    }
    void show() {
        cout<<"学号:"<<id<<endl<<"姓名:"<<name<<endl<<"班级:"<<class_name<<endl<<"性别:"<<sex<<endl<<"年龄:"<<age<<endl;
    }
};


int main(){
    Student stu = Student(1, "小王", "五一班" ,"男",8);
    stu.show();
    stu.repair();
    stu.show();
    return 0;
}







