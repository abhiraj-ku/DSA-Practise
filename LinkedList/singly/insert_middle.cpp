
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int value) : val(value), next(nullptr) {}
};

void insertAtHead(Node *&head, int n)
{
    Node *temp = new Node(n);
    temp->next = head;
    head = temp;
}

void insertAtPostion(Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    // new node create
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{

    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(4);
    Node *tail = node1;
    Node *head = node1;
    insertAtHead(head, 22);
    insertAtTail(tail, 15);
    print(head);
    insertAtPostion(head, 2, 9);
    print(head);
    return 0;
}