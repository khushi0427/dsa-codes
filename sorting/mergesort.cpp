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
void merge(int arr[],int low , int mid, int high)
{
    
}

void mergeSort(int arr[], int low , int high)
{

    int mid = (low +high)/2;
    if ( low >=high) return;

    mergesort(arr, low , mid);
    mergesort(arr, mid+1 , high);
    merge(arr, low , mid , high);

}
int main()
{
    int arr[] = {5, 1, 4, 3, 2};
    display(arr, 5);
    cout << endl;
    mergeSort(arr, 0,4);
    display(arr, 5);
    return 0;
}