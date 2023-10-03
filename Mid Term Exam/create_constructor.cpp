#include<bits/stdc++.h>
using namespace std;

// Created class 
class Student
{
    public:
    char name[100]; 
    int roll;        
    int cls;
    
    // Create Constructor function
    Student(char* nam , int rol, int clas){
        strcpy(name, nam);
        roll = rol;            
        cls = clas;
    }
};

int main(){
    
    Student sifat("Sifat Islam", 90, 13);

    return 0;
}