// reverse a string 


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string n;
    cout <<"enter the string you want to reverse: " ;
    cin >> n;

    cout<<endl;

    int i = 0;
    int j = n.length()-1;

    while ( i<=j)
    {
        swap(n[i],n[j]);
        i++;
        j--;
    }
// INBUILT FN IS there for the above code.
    // reverse(n.begin() , n.end());
    cout<<n;
}