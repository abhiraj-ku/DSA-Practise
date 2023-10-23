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

    // print function to display
    void print()
    {
        cout << "The stack list is :";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "  " << endl;
    }
};
int main()
{
    Stack st(5);
    st.push(34);
    st.push(356);
    st.push(39);
    st.push(90);
    st.push(56);
    st.print();

    st.pop();
    cout << "top is:" << st.peek();
    return 0;
}