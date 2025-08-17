// Write a program to rotate the matrix by 90 degrees clockwise.

#include <iostream>
using namespace std;
int main ()
{
    // input 
    int m ;
    cout<<"enter row ";
    cin>>m;

    int n ;
    cout<<"enter column ";
    cin>>n;


    int arr[m][n];
    
    for(int i = 0; i<=m-1; i++)
    {
        for (int  j = 0; j<=n-1; j++ )
        {
            cout<<"enter "<<i<<" "<<j<<"the element: ";
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
// transpose 
    for(int i = 0; i<=m-1; i++)
    {
        for ( int j = 0; j<=n-1; j++ )
        {
            if (j<i)
            swap(arr[i][j] , arr[j][i]);
        }

        cout<<endl;
        
    }



 for(int i = 0; i<=m-1; i++)
    {
        for ( int j = 0; j<=n-1; j++ )
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}