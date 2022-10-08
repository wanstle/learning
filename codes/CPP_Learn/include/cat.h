#ifndef CAT_H_
#define CAT_H_

#include "pet.h"

class Cat:public Pet{
public:
    Cat(string n,int a,string c):Pet(n,a,c){};
    void Speak();
};

#endif // CAT_H_