#include "cat.h"

#include <iostream>

using namespace std;


//使用函数模板进行比较大小操作


template<class T>
T getmax(T &a,T &b){
    if(a > b)
        return a;
    else
        return b;
};
template<class T>
T getAbs(T a){
    return a > 0?a:(-a);
};

int func_moban(){
    Cat pet1("Kitty", 1, "white");
    Cat pet2("Mimi", 2, "brown");

    cout << getmax(pet1, pet2);
    system("pause");

    return 0;
}