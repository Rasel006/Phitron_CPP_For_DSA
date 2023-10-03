#include<bits/stdc++.h>
using namespace std;

// create classs here

class Human_Data
{
    public:
    char name[100];
    char male_female[100];
    int age;
    int birth_date;
    int birth_month;
    int birth_year;
};
class Student_data
{
    public:
    char name[100];
    char male_female[100];
    int age;
    int roll;
    char section;
};
class Bike_model
{
    public:
    char model_name[100];
    int version;
    int km_hours;
    int gears;
};


int main(){

    //  Create Object here 
    

    // Object of a human 
    Human_Data person_one;
    person_one.age = 29;
    person_one.birth_date = 21;
    person_one.birth_month = 10;
    person_one.birth_year = 2003;
    char Sifat[20] = "Sifat Islam";
    strcpy(person_one.name, Sifat);
    char gender[20] = "Male";
    strcpy(person_one.male_female, gender); 

    // Print the Human  object 
    cout << "Human_data "<< endl<<"Name :"<< person_one.name<< endl<<"Age :"<< person_one.age<< endl <<"Birth :"<< person_one.birth_date<<"\\"<<person_one.birth_month << "\\"<< person_one.birth_year<< endl<<"Gender :"<< person_one.male_female<< endl<<endl<<endl;

    // Object of a student 

    Student_data rifat;
    char rifat_name[20] = "Refat Hassan";
    strcpy(rifat.name, rifat_name);
    strcpy(rifat.male_female,gender);
    rifat.age = 19;
    rifat.roll = 229;
    rifat.section = 'a';

    // Print the Student Object
    cout << "Student_Data "<< endl<<"Name :"<< rifat.name<< endl<<"Age :"<< rifat.age<< endl <<"Roll :"<< rifat.roll<<endl<< "Section :"<<rifat.section<< endl<<"Gender :"<< rifat.male_female<< endl<<endl<<endl;
    // Object Of Bike 

    Bike_model Yamaha;
    char model_nam[20] = "R15V3";
    strcpy(Yamaha.model_name, model_nam);
    Yamaha.gears = 6;
    Yamaha.km_hours = 1000;
    Yamaha.version = 3;
    
    // Print the Bike Object 

    cout << "Bike_Model "<< endl<<"Name :"<< Yamaha.model_name<< endl<<"Gears :"<< Yamaha.gears<< endl <<"Kilo_hours :"<< Yamaha.km_hours<< "Version :"<<Yamaha.version<<endl<<endl<<endl;


    return 0;
}