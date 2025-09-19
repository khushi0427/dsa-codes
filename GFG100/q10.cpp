// Write a Program to Remove the Vowels from a String

#include <iostream>
using namespace std;
/**
 * @brief This function takes a string as input and removes all vowels from it.
 * The output string does not contain any vowels.
 *
 * @param with The string from which the vowels will be removed.
 * @return A string without any vowels.
 * @example optmized("hello world") returns "hll wrld"
 *
 * @details i am traversing the string then i am changing the vowels with aage k characters  the make sure that resize the string

 * */
string optmized(string with)
{
  int j = 0;

  for (int i = 0; i < with.length(); i++)
  {
    if (with[i] == 'a' || with[i] == 'e' || with[i] == 'i' || with[i] == 'o' || with[i] == 'u')
      continue;

    else
    {
      with[j] = with[i];
      j++;
    }
  }
  with.resize(j);
  return with;
}
int main()
{
  //  approach:-
  // iterate through the string skip the upcoming vowels and put the consonents in the other string;
  string without;
  string with = "hey! khushi is great right";

  for (int i = 0; i < with.length(); i++)
  {
    if (with[i] == 'a' || with[i] == 'e' || with[i] == 'i' || with[i] == 'o' || with[i] == 'u')
      continue;

    else
    {
      without.push_back(with[i]);
    }
  }
  cout << without << endl;

  cout << "original is " << with << endl;
  cout << optmized(with);
  return 0;
}