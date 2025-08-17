#include <iostream>

using namespace std;

void binarySearch(int arr [], int n,int target)
{
   int low = 0;
   int high = n-1;
   int mid ;
   bool flag = false;

   while ( low<=high)
   {
        
        mid = low + (high-low)/2;

        if (arr[mid]==target)
        {
            flag = true;
            cout<<"lower bound is "<<arr[mid-1];
            break;
        }
        else if(arr[mid]<target)
        {
            low = mid+1;
        }
        else high = mid -1;
   }
   if (flag == false) cout<<"lower bound is "<<arr[high];

   
}

int main ()
{
    int arr [] = { 1,2,5,6,7,8,9,10};
    int size = 8;
    int  target = 5;
    binarySearch(arr,size,target);


}