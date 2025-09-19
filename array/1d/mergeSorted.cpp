#include <iostream>
#include <vector>
using namespace std;

void merge(const vector<int>& arr, const vector<int>& brr, vector<int>& ans , int n,int m) {
   
  int i = 0,j =0 , k = 0;

  while (i<n || j<m)
{
  if (arr[i]<brr[j])
  {
    ans[k] = arr[i];
    k++,i++;
  }
  else if (brr[j]<arr[i])
  {
    ans[k] = brr[j];
    k++,j++;
  }
}
if (i== n-1)
{
  while ( k< m+n)
  {
    ans[k] = brr[j];
    k++,j++;
  }
}
else {
   while ( k<m+n)
  {
    ans[k] = arr[i];
    k++,i++;
  }
}


}

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> brr(m);
    cout << "Enter " << m << " elements: ";
    for (int i = 0; i < m; i++)
        cin >> brr[i];

    vector<int> ans;
    merge(arr, brr, ans,n,m);

    cout << "The merged array is:\n";
    for (int x : ans)
        cout << x << " ";
    cout << "\n";
    return 0;
}
