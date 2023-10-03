#include<bits/stdc++.h>
using namespace std;

// Create class 
class Student
{
    public:
    string Name;
    int Roll;
    int Marks;
};

int main(){
    // Create object array and take input 
    Student section_1[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, section_1[i].Name);
        cin>> section_1[i].Roll >> section_1[i].Marks;
        cin.ignore();
    }

    // Compare the value of marks Who gets max 
    Student mx;
    mx.Marks = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        if(section_1[i].Marks > mx.Marks){
            mx = section_1[i];
        }
    }

    // See the result 
    cout << "The result of the Max one "<< endl;
    cout<< "Name : " << mx.Name << endl;
    cout<< "Roll : " << mx.Roll << endl;
    cout<< "Marks : " << mx.Marks << endl;
    cout<< endl;

    // Compare the value of marks Who gets min
    Student mn;
    mn.Marks = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        if (section_1[i].Marks < mn.Marks)
        {
            mn = section_1[i];
        }
        
    }

    cout << "The result of the Min one "<< endl;
    cout<< "Name : " << mn.Name << endl;
    cout<< "Roll : " << mn.Roll << endl;
    cout<< "Marks : " << mn.Marks << endl;
    cout<< endl;

    
    

    
     

    return 0;
}