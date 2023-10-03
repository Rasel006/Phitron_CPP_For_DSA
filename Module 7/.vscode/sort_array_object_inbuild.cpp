#include<bits/stdc++.h>
using namespace std;

// Create class 
class Student
{
    public:
    string Name;
    int Marks;
    int Roll;
};

bool cmp(Student a, Student b)
{
    if(a.Marks > b.Marks){return true;}
    else{return false;}
}


int main(){
    
    // Create and object arrry 
    Student section_1[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, section_1[i].Name);
        cin >> section_1[i].Roll >> section_1[i].Marks;
        cin.ignore();
    }

    // Sort the object arry with the inbuild function
    sort(section_1,section_1+3,cmp);


     for (int i = 0; i < 3; i++)
    {
        cout << "Name: "<< section_1[i].Name<< endl;
        cout << "Roll: "<< section_1[i].Roll<< endl;
        cout << "Marks: "<< section_1[i].Marks<< endl;
        cout<< endl;

    }
    
    


     

    return 0;
}