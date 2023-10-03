#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // take input 
     string s;
     cin >> s;
    // Replace the egypt word with spcae 
     while (s.find("EGYPT") != -1)
     {
        s.replace(s.find("EGYPT"),5," ");
     }
     cout<< s;


    return 0;
}