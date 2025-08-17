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
void insertionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j =  i;
        while ( j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int arr[] = {5, 1, 4, 3, 2};
    display(arr, 5);
    cout << endl;
    insertionSort(arr, 5);
    display(arr, 5);
    return 0;
}