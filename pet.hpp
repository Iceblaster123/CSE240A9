#ifndef PET_H
#define PET_H
#include <iostream>

using namespace std;

class Pet{
    public:
        virtual ~Pet(){};
        virtual float CalculateFee(){return 0;};
        string GetName(){return this->name;};
        void setName(string name){this->name = name;};
        int GetWeight(){return this->weight;};
        void setWeight(int weight){this->weight = weight;};
    protected:
        string name;
        int weight;
};

#endif