#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "pet.hpp"

using namespace std;

/*
This extends the abstract class Pet, all it adds is the commission rate of a Dog, which is a constant 2
and it overrides the function CalculateFee, using the constant value
*/

class Dog : public Pet{
    public:
        virtual float CalculateFee() const override{
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