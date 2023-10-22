#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
    // properties

public:
    int *arr;
    int top;
    int size;

    // behaviour

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // push operation

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    // pop operation
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    // peek element(top)
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    // isEmpty
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(34);
    st.push(34);
    st.push(34);

    cout << "top is:" << st.peek();
    return 0;
}