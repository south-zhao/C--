//
// Created by 赵鑫杰 on 2022/5/18.
//
#include <iostream>
using namespace std;
class Cat
{
public:
    Cat();
    static void getNumOfCats();
    ~Cat();
private:
    static int numOfCats;
};

int Cat::numOfCats=3;
Cat::Cat()
{
    numOfCats++;
}
void Cat::getNumOfCats()
{
    cout<<numOfCats<<endl;
}
Cat::~Cat(){
    numOfCats--;
    cout<<"调用析构"<<numOfCats<<endl;
}

int main() {
    Cat::getNumOfCats();
    Cat a;
    Cat::getNumOfCats();
    return 0;
}
