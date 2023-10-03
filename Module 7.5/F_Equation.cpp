#include<bits/stdc++.h>
using namespace std;

void Powwer(int x, int n){
    long long int res=0;
    for (int i = 2; i <= n; i+= 2)
    {
        res += pow(x*1.00 , i*1.00);
    }
    cout << res;
}


int main(){
    int n, x;
    cin >> x >> n;
    Powwer(x, n);;
    return 0;
}