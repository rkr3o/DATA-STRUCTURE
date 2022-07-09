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

Node *createBinarytree(Node *root)
{
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter left to " << data << endl;
    root->left = createBinarytree(root->left);
    cout << "Enter right to " << data << endl;
    root->right = createBinarytree(root->right);

    return root;
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else 
        {
        cout << temp->data << " ";

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        }
    }
}
int main()
{
    Node *root = NULL;
    root = createBinarytree(root);
    levelOrder(root);
}