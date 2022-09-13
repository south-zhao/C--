//
// Created by south-zhao on 2022/9/8.
//
#include"head/client.h"
#include<iostream>
using namespace std;

char client::ServerName='a';
int client::ClientNum=4;
void client::ChangeServerName(char c)
{
    ServerName=c;
}

void client::show()
{
    cout<<ServerName<<"--"<<ClientNum<<endl;
}
client::~client(){}
