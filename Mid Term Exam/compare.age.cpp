// Create two objects of the Person class from question 2-c and initialize them with proper value. Now compare whose age is greater, and print his/her name.
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
    char name_1[100] = "Sifat Islam";
    Person* person_One = new Person(name_1, 5.9, 19); 
     
    char name_2[100] = "Rafsan Islam";
    Person* person_Two = new Person(name_2, 5.7, 21); 
     
    // Compare two person age 
    if(person_One->age > person_Two->age){
        
        cout << person_One->name<<endl;
    }
    else{
        cout<< person_Two->name;
    }

    return 0;
}