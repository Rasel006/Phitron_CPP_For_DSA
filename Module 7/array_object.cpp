#include<bits/stdc++.h>
using namespace std;

// create and class for objects 
class Student
{
    public:
    string Name;
    int Roll;
    int Marks;

};



int main(){
    
    // create arry object s 
    Student arr[3];
    
    // take input object date for arr 
    for (int i = 0; i < 3; i++)
    {
        getline(cin,arr[i].Name);
        cin >>arr[i].Roll>>arr[i].Marks;
        cin.ignore();
    }

    // Output of the object array 
    for (int i = 0; i < 3 ; i++)
    {
        cout<< "Name :"<< arr[i].Name << endl;
        cout<< "Roll :"<< arr[i].Roll << endl;
        cout<< "Marks :"<< arr[i].Marks << endl;
        cout << endl;
        cout << endl;
    }
    
     

    return 0;
}