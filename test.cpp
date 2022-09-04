//
// Created by 赵鑫杰 on 2022/7/7.
//
#include"head/client.h"
#include<iostream>
using namespace std;

int main()
{
    client::show();
    client::ChangeServerName('b');
    client::show();
}