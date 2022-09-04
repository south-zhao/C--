#include<iostream>
using namespace std;

class CPU{
	public:
		CPU(char c);
		void show();
	private:
		char cpu;
};

CPU::CPU(char c):cpu(c){
}

void CPU::show(){
	cout<<cpu<<endl;
}

class RAM{
	public:
		RAM(char r);
		void show();
	private:
		char ram;
};

RAM::RAM(char r):ram(r){
}

void RAM::show(){
	cout<<ram<<endl;
}

class CDROM{
	public:
		CDROM(char m);
		void show();
	private:
		char cdrom;
};

CDROM::CDROM(char m):cdrom(m){
}

void CDROM::show(){
	cout<<cdrom<<endl;
}

class Computer{
	public:
		Computer(char c,char r,char m);
		void show();
		void run();
		void stop();
		~Computer(){}
	private:
		CPU cpu;
		RAM ram;
		CDROM cdrom;
};

Computer::Computer(char c,char r,char m):
	cpu(c),ram(r),cdrom(m){
	}
	
void Computer::run(){
	cout<<"run"<<endl;
}

void Computer::stop(){
	cout<<"stop"<<endl;
}
	
void Computer::show(){
	cpu.show();
	ram.show();
	cdrom.show();
}

int main(){
	Computer cp('w','r','t');
	cp.run();
	cp.show();
	cp.stop();
	return 0;
}
