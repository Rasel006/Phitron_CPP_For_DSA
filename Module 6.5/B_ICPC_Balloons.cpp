#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input testscase 
     int test_case;
     cin >> test_case;

     for (int t = 0; t < test_case; t++)
     {
        // input the string 
        int n;
        cin >> n;
        string s;
        cin >> s;
        // count the char in fequncey arrr 
    int feq_arr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            int val = s[i] - 65;
            feq_arr[val]++;
        }

    // make the sum in qustion order 
    int sum = 0;
    bool found = false;
     for (int i = 0; i < 26; i++)
     {
        if (feq_arr[i] > 0){
        while (feq_arr[i] > 0)
        {
            if (found == false){
                feq_arr[i]--;
                sum+=2;
                found = true;
            }
            else{
                sum++;
                feq_arr[i]--;
            }
        }
        found = false;
        
        }
     }
    //  print the result 
     
     cout << sum<< endl;
     }


    return 0;
}