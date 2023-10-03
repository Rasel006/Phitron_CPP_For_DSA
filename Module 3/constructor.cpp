//Constructior is a special function
//Function name should be the same with class name
//Function should be inside the class
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
    
    Student(char nm[], int r, int c, char sec)
    {
        strcpy(name, nm);
        roll = r;
        cls =  c;
        section = sec;
    }
};
int main()

{
    char name1[100] = "Rahim Khan";
    char name2[100] = "Karim Khan";
    Student Rahim(name1, 23, 9, 'A');
    Student Karim(name2, 24, 10, 'B');

    cout << "Details of Rahim---->" << endl;
    cout << Rahim.name << endl << Rahim.roll << endl << Rahim.cls << endl << Rahim.section << endl;
    cout << "\nDetails of Karim--->" << endl;
    cout << Karim.name << endl << Karim.roll << endl << Karim.cls << endl << Karim.section << endl;

    return 0;
}