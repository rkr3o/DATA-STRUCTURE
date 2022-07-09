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

int getHeight(Node* root)
{
   if(root==NULL)
   {
      return ;
   }

   int left = getHeight(root->left);
   int right = getHeight(root->right);

   return  1+max(left,right);
}
void getPrint(Node* root , int n )
{
   if(root==NULL)
   {
     
      return ;
   }  
   if(n==0)
   {
      cout<<root->data<<" ";
   }
    else 
    {
       getPrint(root->left , n-1);
       getPrint(root->right , n-1);
    }
  

}
int main()
{

   Node *root = new Node(4);
   root->left = new Node(6);
   root->right = new Node(7);
   root->left->left = new Node(9);
    root->left->left->left = new Node(99);
   root->left->right = new Node(10);
   root->right->left=new Node(11);
   root->right->right = new Node(12);
   cout<<getHeight(root);
   cout<<endl;
   int k ;
   cin >> k ;
   getPrint(root , k );
   return 0;
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