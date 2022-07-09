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

    if (data == -1)
    {
        return NULL;
    }

    root = new Node(data);
    cout << "Enter to the left of : " << data << endl;
    root->left = createBinarytree(root->left);
    cout << "Enter to the right of : " << data << endl;
    root->right = createBinarytree(root->right);

    return root;
}

vector<int> getPreorder(Node *root)
{
    vector<int> v;

    if (root == NULL)
    {
        return v;
    }

    stack<Node *> s;
    s.push(root);

    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();

        v.push_back(temp->data);

        if (temp->right)
        {
            s.push(temp->right);
        }
        
        if (temp->left)
        {
            s.push(temp->left);
        }
    }
    return v;
}
int main()
{
    Node *root = NULL;

    root = createBinarytree(root);

    vector<int> Preorder;
    Preorder = getPreorder(root);
    for (int i = 0; i < Preorder.size(); i++)
    {
        cout << Preorder[i] << " ";
    }
    return 0;
}