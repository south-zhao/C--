//
// Created by 赵鑫杰 on 2022/5/16.
//

#ifndef _STOCK_H_
#define _STOCK_H_
#include<string>

class Stock{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}
public:
    void acquire(const std::string & co, long n, double  pr);
    void buy(long num,double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};
#endif //PROJECT_STOCK_H
