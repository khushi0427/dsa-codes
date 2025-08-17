// Ques: Write a C++ program to find the largest element of a given 2D array of integers.

#include <iostream>
using namespace std;
int main ()
{
    int m ;
    cout<<"enter row ";
    cin>>m;

    int n ;
    cout<<"enter row ";
    cin>>n;

    int arr[m][n];
    int largest = 0;

    for(int i = 0; i<=m-1; i++)
    {
        for (int  j = 0; j<=n-1; j++ )
        {
            cout<<"enter "<<i<<" "<<j<<"th element";
            cin>>arr[i][j];
        }
        

    }

    cout<<endl;

    // print
  for(int i = 0; i<=m-1; i++)
    {
        for ( int j = 0; j<=n-1; j++ )
        {
            cout<<arr[i][j]<<" ";
           
        }
        cout<<endl;
        
    }

    



     for(int i = 0; i<=m-1; i++)
    {
        for ( int j = 0; j<=n-1; j++ )
        {
           if (arr[i][j]>largest)
           largest = arr[i][j];
        }
    }

    cout<<"largest is "<<largest;
}