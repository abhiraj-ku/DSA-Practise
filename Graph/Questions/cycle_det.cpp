/* Detect a cycle in an undirected-graph : if you start from a node and during traversal if you reach back to that node then 
there is a chance of cycle in a graph

dfs 
visited array 
if the node is visited and is not parent return true : Cycle detected

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// DFS to find out the cycle
bool has_Cycle(int vertex, vector<vector<int>> &adj,vector<bool> visited ,int parent =-1){
    visited[vertex]=true;
    for(int neighbour:adj[vertex]){
        if(!visited[neighbour]){
            if(has_Cycle(neighbour,adj,visited,vertex)){
                return true;
            }else if(neighbour !=parent){
                return true;
            }
        }
    }
    return false;   // No cycle is found in subtree
}

bool detectCyle(vector<vector<int>> &adj,int nodeCount){
    vector<bool>visited(false,n);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(has_Cycle(i,adj,visited)){
                return true;
            }
        }
    }
return false;  //no Cycle is found in graph
}

int main(){
    int vertexCount = 7;
    int edgeCount = 10;

    // Generate the random value for edge connection within the edgeCount limit
    for(int i =0;i<edgeCount;i++){
        int v1,v2 ;  // assign the vertex values within the range
        do{
            v1= rand()%vertexCount;
            v2= rand()%vertexCount;

        }while(v1==v2);
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);

    }

    bool hasCycle = detectCyle(adj,vertexCount);

    if(hasCycle){
        cout<<"Cycle found in the grapg"<<"";
    }else{
        cout<<"Cycle not detected"<<"";
    }
return 0;
}