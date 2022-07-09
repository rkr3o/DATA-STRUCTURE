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

// insert at Tail (end)

void insertTail(Node *&head, int data)
{
    Node *temp = head;
    Node *n = new Node(data);
    if (temp == NULL)
    {
        temp = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
// insert at head

void insertHead(Node *&head, int data)
{
    Node *temp = head;
    Node *n = new Node(data);
    if (temp == NULL)
    {
        head = n;
    }

    n->next = head;
    head = n;
}
// insert at nth node

void insertNth(Node *&head, int pos, int data)
{
    Node *temp = head;
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    if (pos == 1)
    {

        n->next = head;
        head = n;
        return;
    }
    int counter = 1;
    while (counter != pos)
    {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;
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
    cout << "Insertion at Tail : " << endl
         << "Enter your number : " << endl;
    int tailNum;
    cin >> tailNum;
    for (int i = 0; i < tailNum; i++)
    {
        int x;
        cin >> x;
        insertTail(head, x);
    }

    getDetails(head1);
    cout << endl;
    cout << "Insertion at Head : " << endl
         << "Enter your number : " << endl;
    int numHead;
    cin >> numHead;
    for (int i = 0; i < numHead; i++)
    {
        int x;
        cin >> x;
        insertHead(head1, x);
    }
    getDetails(head1);
    cout << endl;
    cout << "Insertion at  mid or Nth node : " << endl
         << "Enter your number : " << endl;
    int nthNum;
    cin >> nthNum;
    int pos;
    cin >> pos;
    for (int i = 0; i < nthNum; i++)
    {
        int x;
        cin >> x;
        insertNth(head1, pos, x);
    }
    getDetails(head1);
}