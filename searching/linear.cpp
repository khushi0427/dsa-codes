#include <iostream>

using namespace std;

void linear(int arr [], int n,int target)
{
    bool flag = false;
    for(int i = 0; i<= n-1; i++)
    {
        if (arr[i]== target)
        {
            flag = true;
            cout<<"element found! at idx: "<<i<<endl;
            break;
        }
       
    }
     if (flag == false)cout<<"not present"<<endl;
}

int main ()
{
    int arr [] = { 1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int  target = 8;
    linear(arr,size,target);


}