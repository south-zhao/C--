//
// Created by 赵鑫杰 on 2022/7/7.
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
