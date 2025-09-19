// Write a Program to Remove All Characters From a String Except Alphabets

#include <iostream>
using namespace std;

string alphabetsOnly(string str)
{
  int j = 0;

  for (int i = 0; i < str.length(); i++)
  {
    // if ((int(str[i]) >= 65 && int(str[i]) <= 90) || int(str[i]) >= 97 && int(str[i]) <= 122)
    // {
    //   str[j] = str[i];
    //   j++;
    // }
    // else
    // {
    //   continue;
    // }

    if (isalpha(str[i]))
    {
      str[j++] = str[i]; // same as above but easy logic
    }
  }
  str.resize(j);

  return str;
}
int main()
{
  string str = "$-#$khushi#@is__great__$$";
  cout << alphabetsOnly(str);

  return 0;
}