#include<iostream>
using namespace std; 

class Clock{
public:
	Clock (int newH, int newM, int newS){
		hour=newH;
		minute=newM;
		second=newS;
	};
	Clock ():Clock(0, 0 ,0){}
	 
	void setTime(int newH, int newM, int newS);
	void showTime();
	~Clock(){}
private:
	int hour,minute,second;
};

//Clock::Clock(int newH, int newM, int newS):
	//hour(newH),minute(newM),second(newS)
	//{}

//Clock::Clock():hour(0),minute(0),second(0){
//}
void Clock::setTime(int newH, int newM, int newS){
	hour=newH;
	minute=newM;
	second=newS;
}

inline void Clock::showTime(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main()
{
	//Clock myClock1(0, 0, 0);
	Clock myClock2;
	cout<<"Fires time set and output:"<<endl;
	//myClock1.showTime();
	myClock2.showTime();
	cout<<"Second time set and output:"<<endl;
	//myClock1.setTime(8, 30, 30);
	myClock2.setTime(8, 30, 30);
	//myClock1.showTime();
	myClock2.showTime();
	return 0;
 } 
