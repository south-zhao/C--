//
// Created by south-zhao on 2022/9/8.
//
#ifndef __CLIENT_H__
#define __CLIENT_H__
class client
{
private:
    static char ServerName;
    static int ClientNum;
public:
    static void ChangeServerName(char c);
    static void show();
    ~client();
};

#endif


