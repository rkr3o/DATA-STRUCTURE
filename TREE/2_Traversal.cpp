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

Node *createNode(Node *root)
{
	int data;
	cin >> data;
	if (data == -1)
	{
		return NULL;
	}
	root = new Node(data);
	cout<<"Enter data to left : "<<data<<endl;
	root->left = createNode(root->left);
	cout<<"Enter data to right : "<<data<<endl;
	root->right = createNode(root->right);

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
	root = createNode(root);
	getPreorder(root);
	cout << endl;
	getInorder(root);
	cout << endl;
	getPostorder(root);
}