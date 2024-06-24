#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at the head of the linked list
Node *insertAtHead(Node *head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

// Function to display the linked list
void display(Node *head)
{
    Node *current = head;
    while (current)
    {
        cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to delete a node by value (first occurrence)
Node *deleteNodeByValue(Node *head, int val)
{
    Node *current = head;
    Node *prev = nullptr;

    // Traverse the list to find the node with the specified value
    while (current)
    {
        if (current->data == val)
        {
            if (current == head)
            {
                // If the node to delete is the head, update the head
                head = current->next;
            }
            else
            {
                // Update the previous node's next pointer to skip the current node
                prev->next = current->next;
            }

            // Delete the node and return the updated head
            delete current;
            return head;
        }

        // Move to the next node
        prev = current;
        current = current->next;
    }

    return head; // Value not found, return the original head
}

int main()
{
    Node *head = nullptr;

    head = insertAtHead(head, 3);
    head = insertAtHead(head, 2);
    head = insertAtHead(head, 1);
    head = insertAtHead(head, 2);
    head = insertAtHead(head, 4);

    cout << "Original Linked List: ";
    display(head);

    // Delete the first occurrence of value 2
    head = deleteNodeByValue(head, 2);

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
