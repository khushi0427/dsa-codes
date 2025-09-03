// Write a Program to Check Whether a Character is a Vowel or Consonant

#include <bits/stdc++.h>
using namespace std;

int main() {

   char ch; 
   cout<<"enter the character"<<" ";
   cin>>ch;


    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        ? cout << "vowel"
        : cout << "consonant";

    return 0;
} 