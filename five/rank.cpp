#include<iostream>
using namespace std;

enum Res{WIN, LOSE, TIE, CANCEL};

int main(){
	Res res;
	enum Res omit=CANCEL;
	
	for(int count=WIN;count<=CANCEL;count++)
		{res=Res(count);
		if(res==omit)
			cout<<"cancel"<<endl;
		else if(res==WIN)
			cout<<"win"<<endl;
		else if(res==TIE)
			cout<<"tie"<<endl;
		else
			cout<<"lose"<<endl;
		}
	return 0;
}
