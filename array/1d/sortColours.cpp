#include <iostream>
#include <vector>
using namespace std;

// this is 2pass method tc will be o(2n) so find one pass
void sortColours2p(vector<int> &v, int n)
{

  int noz = 0, noo = 0, noT = 0;

  for (int i = 0; i <= n - 1; i++)
  {
    if (v[i] == 0)
      noz++;
    else if (v[i] == 1)
      noo++;
    else
      noT++;
  }

  for (int i = 0; i < noz; i++)
    v[i] = 0;
  for (int i = noz; i < noz + noo; i++)
    v[i] = 1;
  for (int i = noz + noo; i < n; i++)
    v[i] = 2;
}
// dutch wala algo

void sortColours1p(vector<int> &v, int n)
{
  int lo = 0, mid = 0, hi = n - 1;

  while (mid <= hi)
  {
    if (v[mid] == 2)
    {
      swap(v[mid], v[hi]);
      hi--;
    }
    else if (v[mid] == 0)
    {
      swap(v[mid], v[lo]);
      lo++, mid++;
    }
    else
      mid++;
  }
}
int main()
{
  int n;
  cout << "Enter size of vector: ";
  cin >> n;
  vector<int> vec(n);
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++)
    cin >> vec[i];
  cout << "Vector elements: ";

  // fn call for solving

  // sortColours2p(vec, n);
  sortColours1p(vec, n);

  for (int x : vec)
    cout << x << " ";
  cout << "\n";
  return 0;
}