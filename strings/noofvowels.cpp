#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter The String:- ";
    cin >> str;
    int length = str.length();
    int countVowel = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            countVowel++;
        }
    }

    cout << "no of Vowels are:- " << countVowel;
}