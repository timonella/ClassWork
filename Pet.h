#ifndef UNTITLED_PET_H
#define UNTITLED_PET_H

#include <iostream>
#include<string>
#include <vector>

using namespace std;

class Pet{
private:
    string name;
    unsigned age;
    string species;
public:
    Pet(string P_name, unsigned P_age, string P_species){
        this->name = P_name;
        this-> age = P_age;
        this->species = P_species;
    }
};



#endif //UNTITLED_PET_H
