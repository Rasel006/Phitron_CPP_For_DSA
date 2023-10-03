#include<bits/stdc++.h>
using namespace std;

int main(){
    // Test case input 
    int test_case;
    cin >> test_case;

    // Run test case 
    for (int t = 0; t < test_case; t++)
    {
    // Take string input 
     string s;
     cin >> s;
    
    // Sparate first 3 or last 3 
     string first_3 = s;
     string last_3 = s;
     first_3.erase(3,3);
     last_3.erase(0,3);

    //  Make sum of them 
    int sum1 = 0, sum2 = 0;
     for (int i = 0; i < 3; i++)
     {
        sum1 += first_3[i];
     }
     
     for (int i = 0; i < 3; i++)
     {
        sum2 += last_3[i];
     }
    
    // Check are they same or not 
     if(sum1 == sum2){
        cout<< "YES"<< endl;
     }
     else
     {
        cout<< "NO"<< endl;
     }
     
    }
    
    return 0;
}