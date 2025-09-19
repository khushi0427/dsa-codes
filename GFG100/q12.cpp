// Write a Program to Remove Spaces From a String

#include <iostream>
using namespace std;
string removeSpace(string str)
{
  int j = 0;
  for (int i = 0; i < str.length(); i++)
  {

    if (str[i] == ' ')
    {
      continue;
    }
    else
    {
      str[j] = str[i];
      j++;
    }
  }
  str.resize(j);
  return str;
}
int main()
{
  string str = "khushi is really good coder!";
  cout << removeSpace(str);
  return 0;
}