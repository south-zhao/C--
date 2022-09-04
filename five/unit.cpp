#include<iostream>
#include<string>
using namespace std;

struct ExamInfo{
	public:
		ExamInfo(string name, char grade)
			:name(name), mode(GRADE), grade(grade){}
		ExamInfo(string name, bool pass)
			:name(name), mode(PASS), pass(pass){}
		ExamInfo(string name, int num)
			:name(name), mode(NUM), num(num){}
		void show();
	private:
		string name;
		enum{
			GRADE, 
			PASS,
			NUM
		} mode;
		union{
			char grade;
			bool pass;
			int num;
		};  
};

void ExamInfo::show(){
	cout<<name<<":";
	switch(mode)
	{
		case GRADE:cout<<grade;
			break;
		case PASS:cout<<(pass?"PASS":"FALL");
			break;
		case NUM:
			cout<<num;
			break;
	}
	cout<<endl;
}

int main(){
	ExamInfo course1("En", 'E');
	ExamInfo course2("Cal", false);
	ExamInfo course3("Math", 98);
	course1.show();
	course2.show();
	course3.show();
	return 0;
}
