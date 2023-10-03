#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Test case input 
    int test_Case;
    cin >> test_Case;

    for (int t = 0; t < test_Case; t++)
    {
        // Take input of arry 
        int n;
        cin >> n;
        int arrry[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrry[i];
        }
        // Count the odd 
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            if(arrry[i] % 2 != 0){
                odd++;
            }
        }

        // Print ther result 
        if(n % 2 == 0){
            cout << abs((n/2) - odd)<< endl;
        }
        else{
            cout<< -1 << endl;
        }
        

        
        
    }
    

    return 0;
}