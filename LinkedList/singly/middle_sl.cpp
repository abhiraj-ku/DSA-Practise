#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

Node *findMid(Node *head)
{
    if (head == nullptr)
        return nullptr;

    // create fast and slow pointers
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void print(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data;
        current = current->next;
    }
    cout << " ";
}

int main()
{
    int N;
    cout << "enter the value of N: "
         << " ";
    cin >> N;
    Node *head = nullptr;
    for (int i = 0; i < N; i++)
    {
        Node *newNode = new Node(i);
        newNode->next = head;
        head = newNode;
    }

    print(head);

    Node *middleNode = findMid(head);

    if (middleNode != nullptr)
    {
        std::cout << "Middle Node: " << middleNode->data << std::endl;
    }
    else
    {
        std::cout << "The list is empty." << std::endl;
    }
    return 0;
}