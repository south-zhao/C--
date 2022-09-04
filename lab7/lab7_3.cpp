//
// Created by 赵鑫杰 on 2022/6/17.
//
#include "iostream"

using namespace std;

class vehicle{
public:
    vehicle() {}
    vehicle(int M, int W): MaxSpeed(M), Weight(W) {}
    virtual void show() {cout<<MaxSpeed<<"\n"<<Weight<<endl;}
    void Run() {cout<<"Run"<<endl;}
    void Stop() {cout<<"Stop"<<endl;}
protected:
    int MaxSpeed, Weight;
};

class bicycle: virtual public vehicle
{
public:
    bicycle() {}
    bicycle(int M, int W, int H): vehicle(M, W), Height(H) {}
    virtual void show() {cout<<MaxSpeed<<"\n"<<Weight<<"\n"<<Height<<endl;}
protected:
    int Height;
};

class motorcar: virtual public vehicle
{
public:
    motorcar() {}
    motorcar(int M, int W, int S): vehicle(M, W), SeatNum(S) {}
    virtual void show() {cout<<MaxSpeed<<"\n"<<Weight<<"\n"<<SeatNum<<endl;}
protected:
    int SeatNum;
};

class motorcycle: public bicycle, public motorcar{
public:
    motorcycle(int M, int W, int H, int S): vehicle(M, W) {
        Height = H;
        SeatNum = S;
    }
    void show() {cout<<MaxSpeed<<"\n"<<Weight<<"\n"<<Height<<"\n"<<SeatNum<<endl;}
};

int main()
{
    vehicle* p;
    p = new vehicle(120, 200);
    p->Run();
    p->show();
    p->Stop();
    delete p;
    p = new bicycle(120, 200, 100);
    p->Run();
    p->show();
    p->Stop();
    delete p;
    p = new motorcar(120, 200, 8);
    p->Run();
    p->show();
    p->Stop();
    delete p;
    p = new motorcycle(120, 200, 40, 8);
    p->Run();
    p->show();
    p->Stop();
    delete p;
    return 0;
}

