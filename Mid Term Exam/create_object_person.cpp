// Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor. 
#include<bits/stdc++.h>
using namespace std;
// Create class and cosntrunctor

class Person
{
    // Initilalize properties of class
    public:
    char name[100];
    float height;
    int age;

    // Create constructor 
    Person (char* nam, float hgt, int ag){
        strcpy(name, nam);
        height = hgt;
        age = ag;
    }
};


int main(){
    
    // Create Dynamic Object and pass over the value using constructor 
    char name[100] = "Sifat Islam";
    Person* person_one = new Person(name, 5.9, 19); 
     

    return 0;
}