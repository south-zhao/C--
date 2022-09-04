#include<iostream>
using namespace std;

class Birthday{
	public:
		Birthday(int year, int month, int day);
		void show() const;
//	private:
		int year;
		int month;
		int day;
};


Birthday::Birthday(int year, int month, int day):
year(year),month(month),day(day){
}

inline void Birthday::show() const{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}

int main(){
    Birthday b(12,12,12);
    printf("%d", b.month);
    return 0;
}
//
//class People{
//	public:
//		People(int num, char sex, int year, int month, int day, int id);
//		People(People &p);
//		void show();
//		~People(){}
//	private:
//		int number;
//		char sex;
//		Birthday birthday;
//		int id;
//};
//
//
//People::People(int num, char sex, int year, int month, int day, int id):
//number(num),sex(sex),birthday(year,month,day),id(id){
//}
//
//People::People(People &p):number(p.number),sex(p.sex),birthday(p.birthday),id(p.id){
//}
//
//inline void People::show(){
//	cout<<number<<" "<<sex<<endl;
//	birthday.show();
//	cout<<id<<endl;
//}
//
//int main(){
//	People peo(2,'n',2002,10,27,34122003);
//	People peo1=peo;
//	peo1.show();
//	People peo2(5,'m',2001,2,3,34121995);
//	peo2.show();
//	return 0;
//}
