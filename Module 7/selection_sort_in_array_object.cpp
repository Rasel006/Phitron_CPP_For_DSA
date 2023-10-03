#include<bits/stdc++.h>
using namespace std;

// Create classs
class Student
{
    public:
    string Name;
    int Roll;
    int Marks;
};


int main(){
    
    // Create object arry 
    Student section_1[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin,section_1[i].Name);
        cin >> section_1[i].Roll >> section_1[i].Marks;
        cin.ignore();
    }
    
    // Sort the object arry 
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (section_1[i].Marks < section_1[j].Marks)
            {
                swap(section_1[i],section_1[j]);
            }
            
        }
        
    }
    
    // Print the reslut 
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: "<< section_1[i].Name<< endl;
        cout << "Roll: "<< section_1[i].Roll<< endl;
        cout << "Marks: "<< section_1[i].Marks<< endl;
        cout<< endl;

    }
    
     

    return 0;
}