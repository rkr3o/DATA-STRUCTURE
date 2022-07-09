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

void getDetails(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertTail(Node *&head, int data)
{

    Node *temp = head;
    Node *n = new Node(data);

    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

Node *reverseK(Node *&head, int k)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    int count = 0;
    while (curr != NULL and count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

        count++;
    }

    if (next != NULL)
    {
        head->next = reverseK(next, k);
    }

    return prev;
}
int main()
{
    Node *head = NULL;
    insertTail(head, 10);
    insertTail(head, 20);
    insertTail(head, 30);
    insertTail(head, 10);

    getDetails(head);
    cout << endl;
    int k;
    cin >> k;

    Node *newNode = reverseK(head, k);

    getDetails(newNode);
}