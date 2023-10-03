#include<bits/stdc++.h>

using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};

int main(){
    int n;
    cin>>n; 

    Student students[n];

    for(int i=0;i<n;++i)
    {
        cin>>students[i].name>>students[i].cls>>students[i].section>>students[i].math_marks>>students[i].eng_marks;
    }

    for(int i=n-1;i>=0;--i)
    {
        cout<<students[i].name<< " "<<students[i].cls<<" "<<students[i].section<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }

    return 0;
}
