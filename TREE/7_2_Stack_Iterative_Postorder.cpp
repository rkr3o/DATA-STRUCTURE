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

vector<int> getPostorder(Node *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    stack<Node *> s1, s2;
    s1.push(root);

    while (!s1.empty())
    {
        root = s1.top();
        s1.pop();
        s2.push(root);

        if (root->left)
        {
            s1.push(root->left);
        }
        if (root->right)
        {
            s1.push(root->right);
        }
    }
    while (!s2.empty())
    {

        v.push_back(s2.top()->data);
        s2.pop();
    }

    return v;
}

int main()
{
    Node *root = NULL;

    root = createBinarytree(root);

    vector<int> postorder;
    postorder = getPostorder(root);
    for (int i = 0; i < postorder.size(); i++)
    {
        cout << postorder[i] << " ";
    }
    return 0;
}