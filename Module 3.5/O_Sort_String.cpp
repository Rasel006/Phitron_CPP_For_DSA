//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin >> n;
    int cnt[26] = {0};
    for(int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        int val = s - 'a';
        cnt[val]++;
    }
    for(int i = 0; i < 26; i++)
    {
        //cout << (char)(i+97) << " - " << cnt[i] << endl;
        if(cnt[i] != 0)
        {
            while(cnt[i]--)
            {
                cout << (char)(i+97);
            }
        }
    }
    return 0;
}