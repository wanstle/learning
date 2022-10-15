#include "MyVector.h"

#include <iostream>
#include <string>

using namespace std;
// The ecsmple of using MyVector
int main(){
    MyVector<string> vec_str1;
    MyVector<string> vec_str2(10);
    MyVector<string> vec_str3(10,"hello");
    MyVector<string> vec_strcopy(vec_str3);

    MyVector<int> vec_int1(10,5);
    MyVector<int> vec_intcopy(vec_int1);

    vec_intcopy.show_vec();

    vec_intcopy.push_back(11);
    vec_intcopy.show_vec();

    vec_intcopy.pop_back();
    vec_intcopy.show_vec();

    vec_intcopy.resize(15,1);
    vec_intcopy.show_vec();

    vec_intcopy.reserve(10);
    vec_intcopy.show_vec();

}