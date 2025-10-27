#include <iostream>
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"
using namespace std;



int main(){
    Pet* Bob = new Dog("Bob", 65);
    Pet* Stan = new Dog("Stan", 37);
    Pet* Tom = new Cat("Tom", 12);
    vector<Pet*> pvec;
    pvec.push_back(Bob);
    pvec.push_back(Stan);
    pvec.push_back(Tom);

    float total_fee = 0.0;
    for (int i = 0; i < pvec.size(); i++)
    {
        cout << pvec[i]->GetName() << ' ' << pvec[i]->CalculateFee() << endl;
        total_fee = total_fee + pvec[i]->CalculateFee();
    }
    cout << "total licensing fee = " << total_fee << endl;
}