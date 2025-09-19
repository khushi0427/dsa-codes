#include <iostream>
#include <climits>

using namespace std;

class Node
{

public:
  int val;
  Node *left;
  Node *right;

  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

/**
 * @brief Example of a binary tree
 *
 * This program creates a binary tree with the following structure:
 *      1
 *     / \
 *    2    3
 *   / \    \ \
 *  4   5   6  7
 *
 */

void display(Node *root)
{
  if (root == NULL)
    return;
  else
  {
    cout << root->val << " ";
    display(root->left);
    display(root->right);
  }
}

int sumOfNodes(Node *root)
{
  if (root == NULL)
    return 0;
  else
  {
    return root->val + sumOfNodes(root->left) + sumOfNodes(root->right);
  }
}

int numOfNodes(Node *root)
{
  // num of nodes = root ->1 + no of nodes in lst + no of nodes in rst.
  if (root == NULL)
    return 0;
  else
  {
    return 1 + numOfNodes(root->left) + numOfNodes(root->right);
  }
}
int maxValueNode(Node *root)
{
  if (root == NULL)
    return 0;
  else
  {
    return max(root->val, max(maxValueNode(root->left), maxValueNode(root->right)));
  }
}

int main()
{

  Node *a = new Node(1);
  Node *b = new Node(2);
  Node *c = new Node(3);
  Node *d = new Node(4);
  Node *e = new Node(5);
  Node *f = new Node(6);
  Node *g = new Node(7);

  a->left = b;
  a->right = c;

  b->left = d;
  b->right = e;

  c->left = f;
  c->right = g;

  // display

  display(a);
  cout << endl;
  cout << "sum is ";
  int sum = sumOfNodes(a);
  cout << sum;
  cout << endl;

  cout << "no of nodes  is ";
  int num = numOfNodes(a);
  cout << num;
  cout << endl;

  cout << "max val in  nodes  is ";
  int maximum = maxValueNode(a);
  cout << maximum;
  cout << endl;

  return 0;
}