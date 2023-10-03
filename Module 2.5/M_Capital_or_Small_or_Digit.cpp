#include<bits/stdc++.h>
using namespace std;

int main()
{
// Take input 
   char x;
   cin >> x;
    
    // Use if else and Ternury oparator
   if(x >= 48 && x<= 57)
   {
     cout << "IS DIGIT"<< endl;
   }
    else if (x >= 65 && x <= 90 || x >= 97 && x <= 122)
    {
        cout << "ALPHA"<<endl;
        (x >= 65 && x<=90)? cout << "IS CAPITAL": cout << "IS SMALL"; // ternury oparator
    }
    



    return 0;
}