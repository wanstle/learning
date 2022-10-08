#ifndef DOG_H_
#define DOG_H_

#include "pet.h"

class Dog:public Pet{
public:
    Dog(string n,int a,string c):Pet(n,a,c){};
    void Speak();
};

#endif // DOG_H_