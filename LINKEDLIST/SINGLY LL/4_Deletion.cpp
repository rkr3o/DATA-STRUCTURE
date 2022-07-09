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

void getDetails(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteNode(Node *&head, int val)
{
    Node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    Node *to_delete = temp->next;
    temp->next = temp->next->next;
}
int main()
{
    Node *head = new Node(0);
    Node *head1 = head;

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;

        head->next = new Node(x);
        head = head->next;
    }

    getDetails(head1);
    cout << endl;
    int data;
    while (data != 2)
    {
        cin >> data;
        deleteNode(head1, data);
        getDetails(head1);
        cout << endl;
    }
}