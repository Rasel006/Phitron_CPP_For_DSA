#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take a size of array 
     int n;
     cin >> n;

    //  Make  dynamic array and take input from user 
    int* dynamic_Array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> dynamic_Array[i];
    }
    
    // Output the array
    for (int i = 0; i < n; i++)
    {
        cout << dynamic_Array[i]<<" ";
    }


    return 0;
}