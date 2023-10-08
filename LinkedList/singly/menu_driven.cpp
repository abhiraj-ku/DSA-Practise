#include <iostream>

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a new node at the beginning of the linked list
void Insert_Beginning(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to insert a new node at a specified position in the linked list
void Insert_At_Position(Node *&head, int value, int position)
{
    if (position <= 0)
    {
        std::cout << "Invalid position. Node not inserted." << std::endl;
        return;
    }

    Node *newNode = new Node(value);
    if (position == 1 || head == nullptr)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *current = head;
        for (int i = 1; i < position - 1 && current->next != nullptr; i++)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to insert a new node at the end of the linked list
void Insert_End(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to display the linked list
void Display(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main()
{
    Node *head = nullptr;
    int choice;

    do
    {
        std::cout << "Linked List Operations Menu:" << std::endl;
        std::cout << "1. Insert at Beginning" << std::endl;
        std::cout << "2. Insert at Specified Position" << std::endl;
        std::cout << "3. Insert at End" << std::endl;
        std::cout << "4. Display Linked List" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            int value;
            std::cout << "Enter the value to insert at the beginning: ";
            std::cin >> value;
            Insert_Beginning(head, value);
            break;

        case 2:
            int pos;
            std::cout << "Enter the value to insert: ";
            std::cin >> value;
            std::cout << "Enter the position to insert at: ";
            std::cin >> pos;
            Insert_At_Position(head, value, pos);
            break;

        case 3:
            std::cout << "Enter the value to insert at the end: ";
            std::cin >> value;
            Insert_End(head, value);
            break;

        case 4:
            std::cout << "Linked List: ";
            Display(head);
            break;

        case 5:
            std::cout << "Exiting program." << std::endl;
            break;

        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    } while (choice != 5);

    // Free memory by deleting the nodes
    Node *current = head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
