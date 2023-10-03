#include<bits/stdc++.h>
using namespace std;

// Create Name space 
namespace rasel_var 
{
    string full_name_owner = "Rizu Mohammad Russell";

    int age = 20;

    void hello (){
        cout<< "Hello everyone Rizu";
    }
}
namespace rean_var 
{
    string full_name_owner1 = "Rean Bhuiyan";

    int age1 = 24;

    void hello1 (){
        cout<< "Hello everyone Rean";
    }
}

// one way to access the namespace  this is 
using namespace rasel_var;
using namespace rean_var; // secend way without this using


int main(){

    // first way using namespace ;
    cout << full_name_owner<< endl;
    cout << full_name_owner1<< endl;

    // second way to print the value of namespace
    cout << rean_var::full_name_owner1<<endl;

     

    return 0;
}