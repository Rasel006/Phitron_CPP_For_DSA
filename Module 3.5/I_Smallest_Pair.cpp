//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = INT_MAX;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j =  i + 1; j < n; j++)
            {
                // cout << i+1 << " " << j + 1 << endl;
                int x = arr[i] + arr[j] + j - i;
                mn = min(mn, x);
            }
        }
        cout << mn << endl;
    }

    return 0;
}