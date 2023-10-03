
#include<bits/stdc++.h>
using namespace std;

// Create class 
class CustomSort 
{
    public:
    char c;
    int cnt;
};

// Create cmp function
bool cmp (CustomSort a, CustomSort b){
    if (a.cnt > b.cnt) return true;
    else return false;
    
}



int main(){
    // take input of n;
    int n;
    cin >> n;
    // create fequncy arry of object 
    CustomSort ferq_arr[26];

    for (int i = 0; i < 26; i++)
    {
        ferq_arr[i].c = i + 97;
        ferq_arr[i].cnt = 0;
    }
    
    // Take input 
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        ferq_arr[c - 97].cnt++;
    }
    
    // sort the fequcy array 
    sort(ferq_arr, ferq_arr+26, cmp);
    
    // pritnt the finla result 

    for (int i = 0; i < 26; i++)
    {
        if(ferq_arr[i].cnt > 0){
            for (int j = 0; j < ferq_arr[i].cnt; j++)
            {
                cout<< ferq_arr[i].c;
            }
            
        }
    }
    

     

    return 0;
}