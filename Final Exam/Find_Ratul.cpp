#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);
    string nm;
    bool flag=false;

    while(ss>>nm)
    {
        if(nm=="Ratul")
        {
            flag=true;
            break;
        }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
