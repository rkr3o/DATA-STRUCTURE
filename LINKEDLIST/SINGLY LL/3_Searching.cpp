#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int n)
    {
        data = n;
        next = NULL;
    }
};

void searchKey(Node *head, int key)
{
    Node *temp = head;

    if (head == NULL)
    {
        return;
    }
    int counter = 1;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Found at position : " << counter << endl;
            return;
        }
        temp = temp->next;
        counter++;
    }
    cout << "NOT FOUND" << endl;
}
void getDetails(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *head = new Node(0);
    Node *head1 = head;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        head->next = new Node(x);
        head = head->next;
    }

    getDetails(head1);
    cout << endl;
    cout<<"ENTER KEY : "<<endl;
    int key;
    cin >> key;

    searchKey(head1, key);
   
    cout << endl;
}