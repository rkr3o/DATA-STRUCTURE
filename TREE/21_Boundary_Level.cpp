#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int n)
    {
        data = n;
        left = right = NULL;
    }
};
void leftPartTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL || root->left == NULL and root->right == NULL)
    {
        return;
    }
    ans.push_back(root->data);
    if (root->left)
    {
        leftPartTraversal(root->left, ans);
    }
    if (root->right)
    {
        leftPartTraversal(root->right, ans);
    }
}
void leafNodeTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    if (root->left == NULL and root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }

    leafNodeTraversal(root->left, ans);
    leafNodeTraversal(root->right, ans);
}
void rightPartTraversal(Node *root, vector<int> &ans)
{
    if (root == NULL || root->left == NULL and root->right == NULL)
        return;

    if (root->right)
    {
        rightPartTraversal(root->right, ans);
    }
    if (root->left)
    {
        rightPartTraversal(root->left, ans);
    }

    ans.push_back(root->data);
}
vector<int> BoundaryLevelTraversal(Node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }

    ans.push_back(root->data);
    leftPartTraversal(root->left, ans);
    leafNodeTraversal(root->left, ans);
    leafNodeTraversal(root->right, ans);
    rightPartTraversal(root->right, ans);

    return ans;
}

int main()
{

    Node *root = new Node(4);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->left->left->left = new Node(99);
    root->left->right = new Node(10);
    root->right->left = new Node(11);
    root->right->right = new Node(12);
    vector<int> p;
    p = BoundaryLevelTraversal(root);
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << " ";
    }
}
/*
            (4)
          /    \
         /      \
      (6)        (7)
      / \       /   \
    (9) (10) (11)   (12)
    /
  (99)

*/