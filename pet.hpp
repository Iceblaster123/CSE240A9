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
        string GetName() const {return this->name;};
        void SetName(const string& name) {this->name = name;};
        int GetWeight() const {return this->weight;};
        void SetWeight(const int& weight) {this->weight = weight;};
    protected:
        string name;
        int weight;
};

#endif