#include<bits/stdc++.h>
using namespace std;

// Create class and create function on the class 
class Person
{
    public:
    string Name;
    int age;
    float height;
    string Hair_Color;

    // Create constructor 
    Person(string nam, int ag, float heigt, string haircolor){
        Name = nam;
        age = ag;
        height = heigt;
        Hair_Color = haircolor;
    }
    
    // Create function on the class
    void print (){
        cout << "Name :" << Name<< endl;
        cout << "Age :" << age<< endl;
        cout << "Height :" << height<< endl;
        cout << "Hair Color :" << Hair_Color<< endl;
    }
    void Three_endll(){
        cout<< endl;
        cout<< endl;
        cout<< endl;
    }

};


int main(){
    
    // Create object 
    Person rasel("Rasel", 19, 5.10,"Black");
    Person rean("Rean", 21, 5.7,"Black");
    Person mahin("Mahin", 19, 5.9,"Black");
    rasel.print();// Call the function form class
    rasel.Three_endll();
    rean.print();// Call the function form class
    rean.Three_endll();
    mahin.print();// Call the function form class
     

    return 0;
}