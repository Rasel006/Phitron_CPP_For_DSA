#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input
     string s;
     getline(cin,s);

     stringstream ss(s);
     string word ;

    //  ss >> word;
    //  reverse(word.begin(), word.end()); others way 
    //  cout<< word;

    int i = 0; // this is my invented way to print spcae in word 
     while (ss >> word)
     {
        reverse(word.begin(), word.end());
        if(i > 0)cout <<" ";
        i++; // my way 
        cout << word;
        // cout<<" "<< word; other way 

     }
     

    return 0;
}