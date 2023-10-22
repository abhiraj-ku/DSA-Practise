#include <iostream>
using namespace std;
const int MAX_SIZE = 5;
struct Stack
{
    int data[MAX_SIZE];
    int top;

    Stack()
    {
        top = -1;
    }
    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "already full teri maa ka nikal yaha se" << endl;
        }
        data[++top] = val;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "khali h re lawde" << endl;
            return;
        }
        --top;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return data[top];
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

// main

int main()
{

    Stack dummy;
    dummy.push(5);
    dummy.push(8);
    dummy.push(7);

    cout << "Top element: " << dummy.peek() << endl;
    dummy.print();

    // dummy.pop();
    // cout << "New top element: " << dummy.peek() << endl;

    return 0;
}