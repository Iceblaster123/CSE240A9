#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "pet.hpp"

using namespace std;

class Dog : public Pet{
    public:
        virtual float CalculateFee(){
            return commissionRate * this->weight;
        };
        Dog(string name, int weight){
            this->name = name;
            this->weight = weight;
        };
        Dog(){
            this->name = "";
            this->weight = 0;
        };
        ~Dog(){};
    private:
        const float commissionRate = 2;
};

#endif