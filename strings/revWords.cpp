#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverseWords(string &str)
{
    int start = 0;
    reverse(str.begin(), str.end());

    for (int i = 0; i <= str.size(); i++)
    {
        if (i == str.size() || str[i] == ' ')
        {
            reverse(str.begin() + start, str.begin() + i);

            start =i+1;
        }
    }
}
int main()
{

    string sentence;

    cout << "enter the sentence: ";
    getline(cin, sentence);

    reverseWords(sentence);

     cout << "sentence after operation : "<<sentence;
    return 0;
}
