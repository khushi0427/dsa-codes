// Write a Program to Find a Leap Year or Not

#include <iostream>
using namespace std;

bool  leapYear(int n)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
int main() {
  int n;
  cout<<"enter the year dude: ";
  cin>>n;

  bool leap = leapYear(n);


    return 0;
}
