#include "test.h"
#include <string>
#include <iostream>
using namespace std;

void Test::setdata(int n){
    this->data = n;
};
void Test::showdata(){
    cout << "data:" << data << endl;
};
