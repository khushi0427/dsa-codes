// Write a Program to Check the Prime Number

#include <iostream>
using namespace std;
bool primeCheck(int n, int i)
{
  if (i == 1)
    return true;

  if (n % i == 0)
  {
    return false;
  }
  else
  {
    primeCheck(n, i - 1);
  }
}
int main()
{
  int n;
  cout << "Enter the number:- " << endl;
  cin >> n;

  // cout << "it is prime ?" << primeCheck(n, n - 1);
  int flag = true;
  for (int i = 2; i < n - 1; i++)
  {
    if (n % i == 0)
    {
      cout << "not a prime";
      flag = false;
      break;
    }
  }

  if (flag == true)
  {
    cout << "A prime";
  }

  return 0;
}