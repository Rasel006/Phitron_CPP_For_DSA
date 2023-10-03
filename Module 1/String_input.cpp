#include<iostream>

using namespace std;
int main()

{

    char s[100];
    // cin >> s; //input without space
    cin.getline(s,100); //input with space and without enter(dont take enter)
    cout << s;

    return 0;
}