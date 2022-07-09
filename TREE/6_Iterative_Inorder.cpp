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
    cout << "Enter to the  right of : " << data << endl;
    root->right = createBinarytree(root->right);

    return root;
}

vector<int> getInorder(Node *root)
{
    vector<int> v;
    stack<Node *> s;
    while (true)
    {
        if ( root!= NULL)
        {
            s.push(root);
            root = root->left;
        }

        else
        {
            if (s.empty() == true)
            {
                break;
            }
            root = s.top();
            s.pop();
            v.push_back(root->data);
            root->right;
        }
    }

    return v;
}
int main()
{
    Node *root = NULL;

    root = createBinarytree(root);

    vector<int> inorder;
    inorder = getInorder(root);
    for (int i = 0; i < inorder.size(); i++)
    {
        cout << inorder[i] << " ";
    }
    return 0;
}