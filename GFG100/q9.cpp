// Write a Program to Count the Number of Vowels 

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    cout <<"enter the string"<<endl;
    cin>>s;

    int i = 0;

    int count = 0;
     while ( s[i] != '\0')
    {
         (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
     s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        ? count++: ;
        
        i++;
    }
  cout <<count;
    

    return 0;
} 