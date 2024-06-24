#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to display the linked list
void display(Node *head)
{
    Node *current = head;
    while (current)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to delete a specified node
Node *deleteNode(Node *head, Node *nodeToDelete)
{
    if (!nodeToDelete || !head)
    {
        // Return if the node to delete is nullptr or the list is empty
        return head;
    }

    if (nodeToDelete == head)
    {
        // If the node to delete is the head, update the head
        head = head->next;
        delete nodeToDelete;
        return head;
    }

    Node *current = head;
    while (current && current->next != nodeToDelete)
    {
        current = current->next;
    }

    if (current)
    {
        // Update the next pointer of the previous node
        current->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    return head;
}

int main()
{
    Node *head = new Node(1);

    // Create nodes and build the linked list

    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original Linked List: ";
    display(head);

    // Find and delete the node with value 2
    Node *nodeToDelete = head->next; // In this case, we choose the second node (value 2)
    head = deleteNode(head, nodeToDelete);

    cout << "Updated Linked List: ";
    display(head);

    // Clean up the memory by deleting all nodes
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
