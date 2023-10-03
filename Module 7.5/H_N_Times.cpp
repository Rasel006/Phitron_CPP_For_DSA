#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Take testcase input 
    int test_Case;
    cin >> test_Case;

    for (int t = 0; t< test_Case; t++)
    {
        // Take input n and ch and print it 
        int n;
        char ch;
        cin >> n >> ch;
        for (int i = 0; i < n; i++)
        {
            if(i > 0) cout<< " ";
            cout << ch;
        }
        cout << endl;
    }
    

    return 0;
}