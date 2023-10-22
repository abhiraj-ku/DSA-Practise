
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    // push operation
    s.push(5);
    s.push(4);

    cout << "on top is: " << s.top() << endl;

    // pop operation
    s.pop();
    cout << "after popping is: " << s.top() << endl;

    // isEmpty
    if (s.empty())
    {
        cout << "stack khali h bhai" << endl;
    }
    else
    {
        cout << "h bhai abhi kuch" << endl;
    }

    return 0;
}