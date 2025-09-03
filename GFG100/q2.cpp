// Write a Program to Find the Greatest of the Three Numbers.

#include <bits/stdc++.h>
using namespace std;

int main() {

    int m,n,o;

    cout<<"enter the numbers"<<endl;
    cin>>m>>n>>o;

    // compare 
    if (m <= n && o<n)
    {
        cout<<n<<" is largest";
    }
    else if (m>= n && o<m)
    cout<<m<<"is largest";
    else cout<<  o<<" is largest";

    return 0;
} 
// use '=' so it will check if no are equal
