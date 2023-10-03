#include<bits/stdc++.h>
using namespace std;

int main(){

// if there is an input before getline we must need to use those 
    int n;
    cin >> n;
    // cin.ignore(); or 
    getchar();
    cout<< n<<endl;
     string s;

    //  This way to take input with space 
    getline(cin,s);

    cout<< s;

    return 0;
}