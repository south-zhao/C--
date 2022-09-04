//
// Created by 赵鑫杰 on 2022/5/24.
//
#include "iostream"

using namespace std;

namespace S1{
    void fun()
    {
     int x = 50;
     cout<<"--"<<x<<endl;
    }
    namespace S3
    {
        void fun()
        {
            int x = 70;
            cout<<"____"<<x<<endl;
        }
    }
}

namespace S2{
    void fun()
    {
        int x = 100;
        cout<<"-------"<<x<<endl;
    }
}

int main()
{
    S1::fun();
    S1::S3::fun();
    S2::fun();
    return 0;
}
