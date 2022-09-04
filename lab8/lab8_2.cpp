//
// Created by 赵鑫杰 on 2022/6/24.
//
#include "iostream"

using namespace std;

class vehicle{
public:
    vehicle() = default;
    virtual void Run() {cout<<"Run"<<endl;}
    virtual void Stop() {cout<<"Stop"<<endl;}
};

class bicycle: public virtual vehicle
{
public:
    bicycle() = default;
};

class motorcar: public virtual vehicle
{
public:
    motorcar() = default;
};

class motorcycle: public bicycle, public motorcar{
public:
    motorcycle() = default;
};

int main()
{
    vehicle* p;
    cout<<"vehicle:";
    p = new vehicle();
    p->Run();
    p->Stop();
    delete p;
    cout<<"bicycle:";
    p = new bicycle();
    p->Run();
    p->Stop();
    delete p;
    cout<<"motorcar:";
    p = new motorcar();
    p->Run();
    p->Stop();
    delete p;
    cout<<"motorcycle:";
    p = new motorcycle();
    p->Run();
    p->Stop();
    delete p;
    return 0;
}

