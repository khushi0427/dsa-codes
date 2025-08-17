// Write a program to print the transpose of
// the matrix entered by the user and store it in a new matrix


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

    

// transpose

int brr[n][m];
// 

cout<<" transpose"<<endl;
     for(int i = 0; i<=n-1; i++)
    {
        for ( int j = 0; j<=m-1; j++ )
        {
         brr[i][j] = arr[j][i];
        }
    }


     for(int i = 0; i<=n-1; i++)
    {
        for ( int j = 0; j<=m-1; j++ )
        {
            cout<<brr[i][j]<<" ";
           
        }
        cout<<endl;
        
    }
}