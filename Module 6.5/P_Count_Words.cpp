#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // take input 
     string s;
     getline(cin,s);
    
    // count the words without symbols 
    int cnt = 0;
    bool charecter = false;
    for (char c : s)
    {
        if(isalpha(c)){
            if (charecter == false)
            {
                cnt++;
                charecter = true;
            }
            
        }
        else{
            charecter = false;
        }
        
    }
    cout << cnt;
    


    return 0;
}