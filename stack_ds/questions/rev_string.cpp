#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abhi";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char sh = str[i];
        s.push(sh);
    }

    string ans = "";

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    cout << "rev of"
         << " " << str << " "
         << "is  " << ans << endl;
    return 0;
}