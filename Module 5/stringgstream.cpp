#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input of string 
     string s;
     getline(cin, s);
     

    //  use string stream for divide the words 
    // stringstream ss; // using normal method 
    // ss << s;
    stringstream ss(s); // using constructor 
    
    // print the words 
    string words;
    int counter = 0;
    while (ss >> words)
    {
        cout << words << " " << endl;
        counter++;
    }
    cout << counter;
    






    return 0;
}