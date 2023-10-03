#include<bits/stdc++.h>
using namespace std;

int main(){

     string s;
     cin >> s;

    //  Find the first or the index element This three way 
    cout << "First way and easyest way to access the index element " << s[0]<< endl;
    cout << "Secened way and in_build function way to access the index elelment "<< s.at(0)<< endl;
    cout << "First way with in_build function to accesss the fornt element the of a string "<<s.front()<< endl;
    
    // Find the last elemnt by this way 
    cout << "Frist way and easyest way access the last element " << s.back()<< endl;
    cout << "Second way and the normal way to access the last element " << s[s.size() - 1] << endl;


    return 0;
}