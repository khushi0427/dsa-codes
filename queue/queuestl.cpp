#include <iostream>
#include <queue> // queue as stl

using namespace std;
void displayq(queue<int> q, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << q.front() << " ";
    int x = q.front();
    q.pop();
    q.push(x);
  }
}
int main()
{
  queue<int> q;
  // push
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

  cout << "size is" << q.size();
  cout << endl;
  displayq(q, q.size());
  // pop
  q.pop();

  cout << endl;
  cout << "front is " << endl;
  cout << q.front() << endl;
  cout << "back is " << endl;
  cout << q.back();

  return 0;
}