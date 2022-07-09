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

Node *createBinaryTree(Node *root)
{
    int data;
    cin >> data;

    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    root->left = createBinaryTree(root->left);
    root->right = createBinaryTree(root->right);

    return root;
}

void getPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    getPreorder(root->left);
    getPreorder(root->right);
}

void getInorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    getInorder(root->left);
    cout << root->data << " ";
    getInorder(root->right);
}

void getPostorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    getPostorder(root->left);
    getPostorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    root = createBinaryTree(root);
    getPreorder(root);
    cout << endl;
    getInorder(root);
    cout << endl;
    getPostorder(root);
    cout << endl;
}
