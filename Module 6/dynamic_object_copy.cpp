#include<bits/stdc++.h>
using namespace std;

// create class 

class Person
{
    public:
    string Name;
    int age ;

    // create constructor 
    Person (string Name, int age){
        this->Name = Name;
        this->age = age;
    }
    void print (){
        cout << this->Name << " " << this->age;
    }

};

int main(){
    
    // create dynamic object 
    Person* rasel= new Person("Md. Rasel", 20);
    Person* rean = new Person("Rean Bhuiyan", 30);
    
    // to copy dynamic object do this 
    *rasel = *rean; /// this is the easy way
    delete rean;
    rasel->print();

    // rasel->Name = rean->Name; This way is hard 
    // rasel->age = rean->age;




    return 0;
}