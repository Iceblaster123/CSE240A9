#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "pet.hpp"

class Cat : public Pet{
    public:
        virtual float CalculateFee(){
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