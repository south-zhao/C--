#include<iostream>
using namespace std;

class Student
{
	public:
		Student(int id, int ag, int cl=2);
		Student(Student &p); 
		void setInformation(int cl,int id,int ag);
		void showInformation();
		~Student();
	private:
		int classNo,idNo,age;
}; 

Student::Student(int id,int ag,int cl):
	classNo(cl),idNo(id),age(ag){}
	
Student::Student(Student &p){
classNo=p.classNo;
idNo=p.idNo;
age=p.age;}	

void Student::setInformation(int cl,int id,int ag)
{
	classNo=cl;
	idNo=id;
	age=ag;
}

void Student::showInformation()
{
	cout<<classNo<<endl<<idNo<<endl<<age<<endl;
}

Student::~Student(){}

int main()
{
	Student stu1(12,18);
	Student stu2=stu1;
	stu2.showInformation();
	stu2.setInformation(2101,42112003,18);
	stu2.showInformation();
	return 0;
}

