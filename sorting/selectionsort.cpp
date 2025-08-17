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

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int smallest =i; 
        for (int j = i+1; j <= n - 1; j++)
        {
            if (arr[j] <= arr[smallest])
                smallest = j;
        }
        swap(arr[i], arr[smallest]);
    }
}
int main()
{
    int arr[] = {5, 1, 4, 3, 2};
    display(arr, 5);
    cout << endl;
    selectionSort(arr, 5);
    display(arr, 5);
    return 0;
}