#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "pet.hpp"

/*
very similar to the dog class, extends the abstract class Pet, all it adds 
is the commission rate of a Cat, which is a constant 1.5
and it overrides the function CalculateFee, using the constant value
*/

class Cat : public Pet{
    public:
        virtual float CalculateFee() const override{
            return this->weight * commissionRate;
        };
        Cat(string name, int weight){
            this->name = name;
            this->weight = weight;
        }
        Cat(){
            this->name = "";
            this->weight = 0;
        };
        ~Cat(){};
    private:
        const float commissionRate = 1.5;
};

#endif