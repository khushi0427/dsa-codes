//Write a program to print sum of all the elements of a 2D matrix.

#include <iostream>
using namespace std;
int main ()
{
    // input 
    int m ;
    cout<<"enter row ";
    cin>>m;

    int n ;
    cout<<"enter row ";
    cin>>n;

    int arr[m][n];
    int sum = 0;

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
           sum +=arr[i][j];
        }
    }

    cout<<"sum is "<<sum;
}