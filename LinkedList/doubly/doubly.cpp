#include <bits/stdc++.h>
using namespace std;

// Creating Node using classes
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// function to print the nodes
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// function to get length of linkedlist
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// function to insert at head
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// function to insert at tail
void insertAtTail(Node *tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main()
{
    Node *node1 = new Node(4);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    // cout << "the lenth of node is : " << getLength(head);

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 16);
    print(head);

    insertAtTail(tail, 25);
    print(head);
    return 0;
}
