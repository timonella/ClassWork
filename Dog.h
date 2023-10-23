#ifndef UNTITLED_DOG_H
#define UNTITLED_DOG_H

#include <iostream>
#include<string>
#include <vector>

#include "Pet.h"

using namespace std;

class Dog : public Pet {
private:
    string breed;
public:
    void getBreed(){}
};



#endif //UNTITLED_DOG_H
