//#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()

{

    int arr[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    int mn = arr[0];
    int mx = arr[0];
    for(int i = 1; i < 3; i++)
    {
        mn = min(mn, arr[i]);
    }
    for(int i = 1; i < 3; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << mn << " " << mx << endl;
    return 0;
}