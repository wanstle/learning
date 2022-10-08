#include "pet.h"

#include <iostream>
#include <string>

using namespace std;

void Pet::ShowInfo(){
    cout << "It's name is "<< name << "." <<endl;
    cout << "It's " << age << " years old." << endl;
    cout << "It's " << color << "." << endl;
};

bool Pet::operator>(const Pet &p){
    if(age > p.age)
        return true;
    else  
        return false;
};

ostream &operator<<(ostream &myout, const Pet &p){
    cout << "The bigger one's name is " << p.name << "." << endl; 
    return myout;
}