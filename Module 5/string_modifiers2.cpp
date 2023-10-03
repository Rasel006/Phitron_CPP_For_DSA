#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "helloword";
    //  how an string Reassign 
    // s = "hi";
    // cout<< "Easy way to reassingn string " << s << endl;

    // if we want any charecter form a our index than we have to do like this 
    // s.erase(4,3);
    // cout<< "After remove 3 letter form 4 index "<< s << endl;
    // if want reomove any lettter and add another on there so we have do like this 
    s.replace(5,1, "Rasell");
    cout << "After remove 1 letter form 5 index and Replace Rasell"<< s<< endl;
    // Only inser can do with insert() function 

    


    return 0;
}