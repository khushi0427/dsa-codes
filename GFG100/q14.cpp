// Write a Program to Find the Factorial of a Number Using Loops

#include <iostream>
using namespace std;
int factUptoNLoop(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int factUptoNRec(int n)
{
  if (n == 1)
    return 1;

  return n * (factUptoNRec(n - 1));
}

int main()
{

  int n;
  cout << "enter the no. for factroial: ";
  cin >> n;

  cout << "Factorial is: " << factUptoNLoop(n);
  cout << "Factorial is: " << factUptoNRec(n);

  return 0;

  return 0;
}