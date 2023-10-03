#include<bits/stdc++.h>
using namespace std;

int main(){

    //  We will some important in-build function for the String 
    
    // NO:1)- Find the length or the size
    string find_size = "Rizu Mohammad Russell";
    cout << "Size of the name by using size() function " << find_size.size()<< endl;

    // NO:2)- Find the max-size of string 
    string mx_size;
    cout << "find the max size of an string by using max_size() function "<< mx_size.max_size()<< endl; 
    
    // NO:3)- Find the capacity of an string and it works dynamic way 
    string capacty_size = "Hello";
    cout<< "Find the capacity of an string with capacity() " << capacty_size.capacity()<< endl;
    // It works dynamic 
    capacty_size = "Hello Rasel nice to meet you";
    cout<< "Find the capacity of an string with capacity() " << capacty_size.capacity()<< endl;
    // It works dynamic 
    capacty_size = "Hello Rizu nice to meet you? what are your hobby";
    cout<< "Find the capacity of an string with capacity() " << capacty_size.capacity()<< endl;
    
    // NO:4)- Clear any string 
    string clr_string = "Hello hi there is Rasel talking with you";
    cout<< clr_string.size() << " The size before using clear function"<< endl;
    clr_string.clear();
    cout<< clr_string.size() << " After using the clear() function"<< endl;

    // NO:5)- Is the string empty or not find this by ture or false 
    string empt_string = "";

    if (empt_string.empty() == true)
    {
        cout << "The string is empty"<< endl;
    }
    else{
        cout << "The string is not empty"<< endl;
    }

    // NO:6)- Resize any string 
    string resize_string = "Hello World";
    resize_string.resize(5); // reduce the array size 
    cout<< "Resize the string by using resize() function " << resize_string<< endl; 
    resize_string.resize(10,'X'); // Make the size bigger and assig "X" no the blank possition
    cout<< "Resize the string by using resize() function " << resize_string<< endl; 
     



    return 0;
}