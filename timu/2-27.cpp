//
// Created by ÕÔöÎ½Ü on 2022/5/23.
//
#include "iostream"

using namespace std;

int main()
{
    for (int j = 2; j < 101; j++)
    {   int i = 0;
        for (int k = 2; k < j/2+1; k++) {
         if (j%k == 0)
             i++;
        }
        if (i == 0)
            cout<<j<<"ÊÇÖÊÊı"<<endl;}
    return 0;
}