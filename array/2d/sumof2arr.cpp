// Write a program to add two matrices.

// must be same idx 

#include <iostream>
using namespace std;
int main ()
{
    // input 1
    int m ;
    cout<<"enter row ";
    cin>>m;

    int n ;
    cout<<"enter row ";
    cin>>n;

    int arr[m][n];
    int brr[m][n];


    for(int i = 0; i<=m-1; i++)
    {
        for (int  j = 0; j<=n-1; j++ )
        {
            cout<<"enter "<<i<<" "<<j<<"th element";
            cin>>arr[i][j];
        }
        

    }

    cout<<"enter 2nd now "<<endl;
// input 2


     for(int i = 0; i<=m-1; i++)
    {
        for (int  j = 0; j<=n-1; j++ )
        {
            cout<<"enter "<<i<<" "<<j<<"th element";
            cin>>brr[i][j];
        }
        
    }


    // sum  1st  = 1st + 2nd 

    for(int i = 0; i<=m-1; i++)
    {
        for (int  j = 0; j<=n-1; j++ )
        {
        arr[i][j] =  arr[i][j]+ brr[i][j];
        }
        
    }

      // print
  for(int i = 0; i<=m-1; i++)
    {
        for ( int j = 0; j<=n-1; j++ )
        {
            cout<<arr[i][j]<<" ";
           
        }
        cout<<endl;
        
    }

   
}