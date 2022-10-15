#include "MyVector.h"

#include <iostream>
#include <string>

using namespace std;
// The ecsmple of using MyVector
int main(){
    MyVector<string> vec_str1;
    MyVector<string> vec_str2(10);
    MyVector<string> vec_str3(5,"hello");
    MyVector<string> vec_strcopy(vec_str3);

    MyVector<int> vec_int1(10,5);
    MyVector<int> vec_intcopy(vec_int1);

    cout << "使用拷贝构造函数构造" << endl;
    vec_strcopy.show_vec();
    cout << endl;

    cout << "使用push_back功能：" << endl;
    cout << "push_back(\"push\")；" << endl;
    vec_strcopy.push_back("push");
    vec_strcopy.show_vec();
    cout << endl;

    cout << "使用pop_back功能：" << endl;
    cout << "pop_back()；" << endl;
    vec_strcopy.pop_back();
    vec_strcopy.show_vec();
    cout << endl;

    cout << "使用resize功能：" << endl;
    cout << "resize(15,\"resize\")；" << endl;
    vec_strcopy.resize(15,"resize");
    vec_strcopy.show_vec();
    cout << endl;

    cout << "使用reserve功能：" << endl;
    cout << "reserve(20)；" << endl;
    vec_strcopy.reserve(20);
    cout << "capacity是" << vec_strcopy.capacity() << endl;
}