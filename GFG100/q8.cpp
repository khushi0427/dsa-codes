//  Write a Program to Toggle Each Character in a String 

#include <bits/stdc++.h>
using namespace std;

string toggle (string &s)
{
    int i  = 0;
    while ( s[i] != '\0')
    {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
        else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
        i++;
    }
    return s;
    }


int main() {

    
    string s; 

    cout <<"enter the string"<<endl;
    cin >>s;

   cout<< toggle(s);
    

    return 0;
}