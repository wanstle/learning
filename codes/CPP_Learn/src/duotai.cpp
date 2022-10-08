#include "cat.h"
#include "dog.h"
#include "pet.h"

#include <iostream>

using namespace std;
//派生类，基类含有纯虚函数，含有函数多态


int duotai()
{
    Pet* pet1 = new Cat("Kitty", 1, "white");
    Pet* pet2 = new Dog("Doggy", 2, "brown");

    pet1->ShowInfo();
    pet1->Speak();
    cout << "-----------------" << endl;
    pet2->ShowInfo();
    pet2->Speak();

    system("pause");
    return 0;
}

