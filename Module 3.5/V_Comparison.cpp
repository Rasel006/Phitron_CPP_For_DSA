//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{

    int a, b;
    char s;
    cin >> a >> s >> b;
    switch(s)
    {
        case '>':
        {
            (a > b)?cout<<"Right"<<endl:cout<<"Wrong"<<endl;
            break;
        }
        case '<':
        {
            (a < b)?cout<<"Right"<<endl:cout<<"Wrong"<<endl;
            break;
        }
        default:
        {
            (a == b)?cout<<"Right"<<endl:cout<<"Wrong"<<endl;
        }
    }

    return 0;
}