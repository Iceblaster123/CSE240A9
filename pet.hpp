#ifndef PET_H
#define PET_H
#include <iostream>

using namespace std;
/*
This is my abstract class, has a destructor, no constructor because never should make
an object of this class. Has the virtual function CalculateFee.
*/
class Pet{
    public:
        virtual ~Pet(){};
        virtual float CalculateFee() const = 0;
        string GetName(){return this->name;};
        void setName(string& name){this->name = name;};
        int GetWeight(){return this->weight;};
        void setWeight(int& weight){this->weight = weight;};
    protected:
        string name;
        int weight;
};

#endif