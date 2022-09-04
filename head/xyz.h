//
// Created by 赵鑫杰 on 2022/5/18.
//

#ifndef PROJECT_XYZ_H
#define PROJECT_XYZ_H
class X;
class Y{
public:
    void g(X*);
};

class X{
private:
    int i;
public:
    X(){i=0;}
    friend void h(X*);
    friend void Y::g(X *) ;
    friend class Z;
};

class Z{
public:
    void f(X * x){x->i += 5;}
};
#endif //PROJECT_XYZ_H
