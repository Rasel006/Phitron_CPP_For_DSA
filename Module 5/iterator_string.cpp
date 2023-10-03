#include<bits/stdc++.h>
using namespace std;

int main(){

     string s  = "Helloworld";
    //  To itarate throgh address we need to function which give us first and last index;
    //  No: 1 
    // s.begin();
    // cout<< *s.begin()<< endl;
    // // No : 2
    // s.end();
    // cout << *s.end()<< endl;
    
    // One way make itarator 
    string:: iterator it;
    for (it = s.begin(); it < s.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<< endl;
    // Another way to make itaretor 
    for (string:: iterator it = s.begin(); it < s.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<< endl;
    // Easyest way and it will work in upper 14 version of c++ compiler  
    for (auto it =s.begin(); it <s.end(); it++)
    {
        cout<< *it << " ";
    }
    




    return 0;
}