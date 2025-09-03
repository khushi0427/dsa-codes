// Write a Program to Print Check Whether a Character is an Alphabet or Not 

#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cout << "enter the character: ";
    cin >> ch; 

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        cout << "Alphabet";
    else
        cout << "Not an Alphabet";

    return 0;
}
