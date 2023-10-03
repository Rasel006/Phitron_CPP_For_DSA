#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Normal way to initialize string
    string s = "Hello world N";
    cout<< s<< endl;
    // By the constructor way 
    string s1("Hello world C");
    cout << s1<< endl;
    // For print fornt i numbers 
    string s2("Hello world F", 5);
    cout<< s2 << endl;
    // For off i numbers 
    string a = "Hello world";
    string s3 (a, 6);
    cout<< s3 << endl;
    // For print n char for i times 
    string s4(4, 's');
    cout << s4 << endl;


    return 0;
}