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
void displayq(queue<int> q, int size)
{
  stack<int>s;
  for (int i = 0; i < size; i++)
  {
    int x = q.front();
    q.pop();
    q.push(x);
  }
  for (int i = 0; i < s.size(); i++)
  {
   X
  }

  
}





int main()
{
  queue<int> q;
  // push
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

  cout << endl;
  displayq(q, q.size());
  

  return 0;
}