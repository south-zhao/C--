//
// Created by 赵鑫杰 on 2022/5/16.
//
#include <iostream>
#include "stock.h"

void Stock::acquire(const std::string &co, long n, double pr) {
    company = co;
    if (n<0)
    {std::cout<<"can't"<<company<<"0\n";
    shares = 0;
    } else
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num<0)
    {
        std::cout<<"can't"<<"abort\n";
    }
    else{
        shares += num;
        share_val = price;
        set_tot();
    }
}


void Stock::sell(long num, double price) {
    using std::cout;
    if(num<0){
        cout<<"can't"<<"abort\n";
    }
    else if(num>shares){
        cout<<"you can't"<<"abort\n";
    } else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    std::cout<<"Company:"<<company
    <<"shares:"<<shares<<'\n'
    <<"share Price:"<<share_val
    <<"Total:"<<total_val<<'\n';
}