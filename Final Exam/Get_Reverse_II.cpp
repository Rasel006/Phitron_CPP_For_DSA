#include<bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    int cls;
    char section;
    int id;
};

int main(){
    int n;
    cin>>n;

    Student students[n];

    for(int i=0;i<n;++i)
    {
        cin>>students[i].name>>students[i].cls>>students[i].section >> students[i].id;
    }

    for(int i=0;i<n/2;++i)
    {
        int temp=students[i].id;
        students[i].id=students[n-i-1].id;
        students[n-i-1].id=temp;
    }

    for(int i=0;i<n;++i)
    {
        cout<<students[i].name<<" "<<students[i].cls<<" "<<students[i].section << " " << students[i].id << endl;
    }

    return 0;
}
