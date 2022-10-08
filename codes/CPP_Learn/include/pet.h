#ifndef PET_H_
#define PET_H_

#include <string>
#include <iostream>

using namespace std;


class Pet{
private:
    string name;
    int age;
    string color;
public:
    Pet(string n,int a,string c):name(n),age(a),color(c){};
    virtual void Speak() = 0;
    void ShowInfo();
    ~Pet(){};
    bool operator>(const Pet &p);
    friend ostream &operator<<(ostream &myout, const Pet &p);
};

#endif // PET_H_