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

vector<int> ZigZagTraversal(Node *root)
{
    if (root == NULL)
    {
        return {};
    }

    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    bool flag = false;

    while (!q.empty())
    {
        int n = q.size();
        vector<int> level;

        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            level.push_back(temp->data);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }

        flag = !flag;
        if (flag == false)
        {
            reverse(level.begin(), level.end());
        }
        for (int i = 0; i < level.size(); i++)
        {
            ans.push_back(level[i]);
        }
    }

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
    p = ZigZagTraversal(root);
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