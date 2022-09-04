#include<iostream>
using namespace std;

class Birth{
	public:
		Birth(int year, int month, int day);
		void show();
	private:
		int year;
		int month;
		int day; 
}; 

Birth::Birth(int year, int month, int day)
:year(year),month(month),day(day){
}

void Birth::show()
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}

class Student{
	public:// 这里用到了组合的方法直接传递一个对象
		Student(string name, int id,Birth birth);
		void show();
	private:
		string name;
		int id;
		Birth birth;
};

Student::Student(string name, int id,Birth birth)
:name(name),id(id),birth(birth){
}

void Student::show(){
	cout<<name<<endl;
	cout<<id<<endl;
	birth.show();
}

int main(){
    Birth birth(2001, 3, 13);
	Student stu("lili", 1002, birth);
	stu.show();
	return 0;
}
