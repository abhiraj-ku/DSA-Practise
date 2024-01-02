// 1. this is matrix representation of graph (adjacency matrix)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int adj[n + 1][m + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0; // space= n*n
}

// 2. this is matrix representation of graph (adjacency list)
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        adj[x].push_back(y);

        adj[y].push_back(x); // for an directed graph we don't need this
    }
    return 0; // space= o(edges or m)
}
