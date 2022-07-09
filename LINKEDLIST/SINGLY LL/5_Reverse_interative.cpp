#include<bits/stdc++.h>
using namespace std ;

class Node{
        public :
        int data ; 
        Node* next ;

        Node(int n)
        {
                data = n ;
                next = NULL;
        }
};

Node* reverse (Node* &head)
{
    
        Node* currptr = head  ;
        Node* prevptr = NULL;
        Node* nextptr ;

        while (currptr!=NULL)
        {
            nextptr= currptr->next ;
            currptr->next = prevptr ;

            prevptr = currptr;
            currptr = nextptr;    
            
        }

        return prevptr;
        
}
void getDetails(Node* head )
{

    Node * temp = head ;

    while (temp!=NULL)
    {
         cout<<temp->data<<" ";
         temp = temp->next;
    }
        
    
}
int main()
{
    Node* head = new Node(0);
    Node* head1 = head ;

    int n ;
    cin >> n ;
    
    for (int i = 0; i < n ; i++)
    {
         int x  ;
         cin >> x ;

         head->next = new Node(x );
         head = head->next ;

    }

    getDetails (head1);
    cout<<endl;
    Node * newNode = reverse(head1);
    getDetails (newNode);

    
}