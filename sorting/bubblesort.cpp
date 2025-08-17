#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}
void bubbleSort(int arr[], int n)
{
    bool flag = true;
    for(int i = 0; i<=n-1; i++)
    {
        for (int j = 0 ; j<=n-1-i; j++)
        {
            if ( arr[j]>arr[j+1])
            {
                flag = false;
                swap(arr[j], arr[j+1]);
                
            }
        }
        if ( flag == true) break;
    }
}
int main()
{
    int arr[] = {5, 1, 4, 3, 2};
    display(arr, 5);
    cout << endl;
    bubbleSort(arr, 5);
    display(arr,5);
    return 0;
}