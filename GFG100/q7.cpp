// Write a Program to Find the Length of the String Without using strlen() Function 

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cout<<"enter the str "<<endl;
    cin>>s;
    int count=0;
    for ( int i  = 0; s[i]!= '\0'; i++)
    {
        count++;
    }
    
    cout <<"count is "<<count;
    return 0;
}

