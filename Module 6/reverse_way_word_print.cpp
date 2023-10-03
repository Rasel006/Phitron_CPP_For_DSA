#include<bits/stdc++.h>
using namespace std;

// Create recursive function 
void print_word_reverse(stringstream& ss){
    string word;
    if(ss >> word){
        print_word_reverse(ss);
        cout<< word<<endl;
    }
}



int main(){
    // Take input 
     string s;
     getline(cin, s);
    //   Make sentence into  Word 
    stringstream ss_word(s);
    print_word_reverse(ss_word);


    return 0;
}