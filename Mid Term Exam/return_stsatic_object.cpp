#include<bits/stdc++.h>
using namespace std;

// Create Class 

class Student 
{
    public:
    char name[100];
    int cls;
    int roll;

    // Create constructor 

    Student (char* nam, int cl, int rl){
        
        strcpy(name, nam);
        cls = cl;
        roll = rl;
    } 
};

Student ST_one(){
    // Create object with constructor 
    char name[100] = "Sifat Islam";
    Student sifat(name, 14, 3);
    
    // return the object 
    return sifat;
}


int main(){

    Student sifat =  ST_one();

    // print the object 
    cout << "Name: " << sifat.name<<endl;
    cout << "Roll: "<< sifat.roll<< endl;
    cout << "Class: " << sifat.cls<< endl;

    return 0;
}