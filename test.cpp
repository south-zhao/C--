//
// Created by south-zhao on 2022/9/8.
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