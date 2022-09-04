#include<iostream>
#include<cmath>
using namespace std;

class Accout{
	public:
		Accout(int date, int id, double rate);
		int getId(){return id;}
		double getBa(){return ba;}
		double getRate(){return rate;}
		void deposit(int date, double amount);
		void withdraw(int date, double amount);
		void settle(int date);
		void show();
	private:
		int id;
		double ba;
		double rate;
		int lastdate;
		double ac;
		void recond(int date,double amount);
		double acl(int date) const{
		return ac+ba*(date-lastdate);
		}
};

Accout::Accout(int date, int id, double rate)
	:id(id), ba(0), rate(rate), lastdate(date), ac(0){
		cout<<date<<"\t#"<<id<<"is create"<<endl;
	}
	
void Accout::recond(int date, double amount){
	ac=acl(date);
	lastdate=date;
	amount=floor(amount*100+0.5)/100;
	ba+=amount;
	cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<ba<<endl;
}	

void Accout::deposit(int date, double amount){
	recond(date, amount);
}

void Accout::withdraw(int date, double amount){
	if(amount>getBa())
		cout<<"no money"<<endl;
	else
		recond(date, -amount);
}

void Accout::settle(int date){
	double interest=acl(date)*rate/365;
	if(interest!=0)
		recond(date, interest);
	ac=0;
}

void Accout::show(){
	cout<<"#"<<id<<"\tba:"<<ba;
}

int main(){
	Accout sa0(1, 21325302, 0.015);
	Accout sa1(1, 58320212, 0.015);
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);
	sa0.settle(90);
	sa1.settle(90);
	sa0.show();		cout<<endl;
	sa1.show();		cout<<endl;
	return 0;
}
