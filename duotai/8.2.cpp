//
// Created by 赵鑫杰 on 2022/6/22.
//
#include "iostream"

using namespace std;

class Clock{
public:
    Clock(int hour=0, int minute=0, int second=0);
    void showTime() const;
    Clock& operator++();
    Clock operator++(int);
private:
    int hour, minute, second;
};

Clock::Clock(int hour /* =0 */, int minute /* =0 */, int second /* =0 */) {
    if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    } else
        cout<<"Time error!"<<endl;
}

void Clock::showTime() const {
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock & Clock::operator++() {
    second++;
    if(second>=60){
        second -= 60;
        minute++;
        if(minute>=60){
            minute -= 60;
            hour = (hour+1)%24;
        }
    }
    return *this;
}

Clock Clock::operator++(int) {
    Clock old= *this;
    ++(*this);
    return old;
}

int main()
{
    Clock myClock(23, 59, 59);
    myClock.showTime();
    (myClock++).showTime();
    (++myClock).showTime();
    return 0;
}





