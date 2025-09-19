// Write a Program to Check Palindrome

#include <iostream>
using namespace std;

void checkPalindrome(string n)
{
  int i = 0;
  int j = n.length() - 1;
  bool flag = true;
  while (i < j)
  {
    if (n[i] != n[j])
    {
      cout << "not  a palindrome";
      flag = false;
      break;
    }
    i++;
    j--;
  }
  if (flag == true)
  {
    cout << "is a palindrome" << endl;
  }
}
void checkPalindromeNo(int m)
{
  int temp = m;
  int ans = 0;

  while (temp != 0)
  {

    ans = (ans * 10) + (temp % 10);
    temp = temp / 10;
  }
  if (ans == m)
  {
    cout << "is a palindrome" << endl;
  }
  else
  {
    cout << "is not a palindrome" << endl;
  }
}
int main()
{

  string n;
  cout << "Enter the word:- " << endl;
  cin >> n;

  checkPalindrome(n);

  int m;
  cout << "Enter the no:- " << endl;
  cin >> m;

  checkPalindromeNo(m);
  return 0;
}
