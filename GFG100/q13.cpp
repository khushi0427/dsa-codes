//  Write a Program to Find the Sum of the First N Natural Numbers

#include <iostream>
using namespace std;

int sumUptoN(int n)
{
  if (n == 1)
    return 1;
  else
  {
    return n + sumUptoN(n - 1);
  }
}
int main()
{
  int n;
  cout << "enter the no. for sum: ";
  cin >> n;

  cout << "sum is: " << sumUptoN(n);

  return 0;
}
