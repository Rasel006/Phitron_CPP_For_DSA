#include<bits/stdc++.h>
using namespace std;

int main(){
    // Make a arry 
    int *arr_One = new int[5]{1,2,3,4,5};
    // Print it 
    for (int i = 0; i < 5; i++)
    {
        cout << arr_One[i]<< " ";
    }
    cout << endl;
    // Now Make a Dynamic Arry 
    int* arr_Two = new int[10];

    // Copy the old arry value 

    for (int i = 0; i <= 10; i++)
    {
        if (i < 5)
        {
            arr_Two[i] = arr_One[i];
        }
        else
        {
            arr_Two[i] = i + 1;
        }
    }

    // Delete the old arry     "arr_One"

    delete[] arr_One;

    // Print The dynamic arry 
    for (int i = 0; i < 10; i++)
    {
        cout << arr_Two[i]<< " ";
    }
    
    return 0;
}