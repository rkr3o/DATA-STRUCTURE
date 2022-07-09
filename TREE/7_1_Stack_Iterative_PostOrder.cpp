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
    stack<Node*> s;
    while (root != NULL || !s.empty())
    {
        if (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
        else
        {

            Node *temp = s.top()->right;
            if (temp == NULL)
            {
                temp = s.top();
                s.pop();
                v.push_back(temp->data);

                while (!s.empty() && temp == s.top()->right)
                {
                    temp = s.top();
                    s.pop();
                    v.push_back(temp->data);
                }
            }
            else
            {
                root = temp;
            }
        }
    }

    return v;
}

int main()
{
    Node *root = NULL ;

    root = createBinarytree(root);

    vector<int> postorder;
    postorder = getPostorder(root);
    for (int i = 0; i < postorder.size(); i++)
    {
        cout << postorder[i] << " ";
    }
    return 0;
}