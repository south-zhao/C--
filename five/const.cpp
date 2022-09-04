#include<iostream>
using namespace std;

class People{
	public:
		People(string name, int age, string addr);
		const string _addr;
		~People();
	private:
		const string _name;
		const int _age;
};

People::People(string name, int age, string addr):
_name(name), _age(age), _addr(addr){
	cout<<_name<<" "<<_age<<" "<<_addr<<endl;
}

People::~People(){}

int main(){
	People p1("张三", 18, "南京师范");
	return 0;
}
