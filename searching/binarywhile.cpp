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
            cout<<"element found at idx: "<<mid;
            break;
        }
        else if(arr[mid]<target)
        {
            low = mid +1;
        }
        else high = mid -1;
   }

   if (flag ==false) cout<<"not there!";
}

int main ()
{
    int arr [] = { 1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int  target = 5;
    binarySearch(arr,size,target);


}