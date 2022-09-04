#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class Rabbit{
	public:
		Rabbit(string name, const char* pf);
		void eat();
		~Rabbit();
	private:
		string _name;
		char* food;
};

Rabbit::Rabbit(string name, const char* pf)
{
	cout<<"rab1"<<endl;
	_name=name;
	food=new char[50];
	memset(food,0,50);
	strcpy(food, pf);
}

void Rabbit::eat()
{
	cout<<_name<<" is eating "<<food<<endl;
}

Rabbit::~Rabbit()
{
	cout<<"然"<<_name<<endl;
	if(food!=NULL)
		delete[]food;
}

int main()
{
	Rabbit A("A","luobo");
	A.eat();
	Rabbit B("B","baicai");
	B.eat();
	return 0;
}
