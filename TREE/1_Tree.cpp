#include<bits/stdc++.h>
using namespace std ;

class Node
{
public:
  int data ;
  Node* left ;
  Node* right ;

  Node (int n )
  {
    data = n ;
    left = right = NULL;
}
};
int main()
{

  Node* root = new Node(4);
  root->left=new Node(6);
  root->right=new Node(7);
  root->left->left=new Node(9);
  root->right->right=new Node(10);


  return 0 ;
}
     /*
				(4)
				/ \
			  (6) (7)
			  /     \
			(9)    (10)
     */