// ques   : find largest word in a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    cout << " enter the sentence:- ";
    getline(cin, sentence);

    int count = 0;
    int maxcount = 0;
    string largestWord;
    string currentWord;

    for (int i = 0; i < sentence.size(); i++)
    {

        if (sentence[i] != ' ')
        {
            count++;
            currentWord += sentence[i];
        }

        else
        {

            if (maxcount <= count)
            {
                largestWord = currentWord;
                maxcount = count;
            }

            count = 0;
            currentWord = "";
        }
    }
    if (count > maxcount)
    {
        largestWord = currentWord;
    }
    cout << largestWord;
}
