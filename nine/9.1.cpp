//
// Created by 赵鑫杰 on 2022/9/2.
//
#include "iostream"

using namespace std;

// 绝对值模板
//template<typename T>
//T abs(T x){
//    return x < 0?-x:x;
//}

// 输出数组
//template<class T>
//void outArray(const T *array, int count) {
//    for (int i = 0; i < count; i++)
//        cout << array[i] << " ";
//    cout << endl;
//}


int main() {
//    int n = -5;
//    double d = -5.5;
//    cout<<abs(n)<<endl;
//    cout<<abs(d)<<endl;
//    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//    double b[8] = {1.1, 2.2, 3.3, 4.4, 5.5,6.6,7.7,8.8};
//    char c[20] = "Welcome to see you!";
//    outArray(a, 8);
//    outArray(b, 8);
//    outArray(c, 20);
int i = 1;
    while (i < 5)
    {
        static int a = 3;
        a += 3;
        i ++;
        cout<<a<<endl;
    }
    return 0;
}





















