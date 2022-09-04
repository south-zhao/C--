#include<iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU
{
	public:
		void setGet(CPU_Rank r,int f,float v);
		void showGet();
		void run()
		{
			cout<<"run"<<endl;
		}
		void stop()
		{
			cout<<"stop"<<endl;
		}
	private:
		CPU_Rank rank;int frequency;float voltage;
};

void CPU::setGet(CPU_Rank r,int f,float v)
{
	rank=r;
	frequency=f;
	voltage=v;
}

inline void CPU::showGet()
{
	cout<<rank<<endl<<frequency<<endl<<voltage<<endl;
}

int main()
{
	CPU a;
	a.run();
	a.setGet(P4,200,3.6);
	a.showGet();
	a.stop();
	return 0;
}
