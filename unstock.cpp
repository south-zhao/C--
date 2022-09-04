//
// Created by 赵鑫杰 on 2022/5/16.
//
#include <iostream>
#include "head/stock.h"

int main(){
    Stock flu_the_cat;
    flu_the_cat.acquire("No", 20, 12.50);
    flu_the_cat.show();
    flu_the_cat.buy(15, 18.125);
    flu_the_cat.show();
    flu_the_cat.sell(400, 20);
    flu_the_cat.show();
    flu_the_cat.buy(300000, 40.125);
    flu_the_cat.show();
    flu_the_cat.sell(300000, 0.125);
    flu_the_cat.show();
    return 0;
}