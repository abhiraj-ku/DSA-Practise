#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;
int N = 20;

vector<vector<int>>adj(N)


// dfs program which takes the starting vertex and the visited array
void dfs(int ver,vector<bool> &visited){
    visited[ver]= true;

    for(int neighbour : adj[ver]){
        if(!visited[neighbour]){
            dfs(neighbour,visited);
        }
    }
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
// this vector will keep track of the visited elements so that the 
    vector<bool>visited(n,false);
    dfs(0,visited);

    //print the elements of adj
    for(int i=0;i<n;i++){  // till the no of nodes
        cout<<"Vertex: "<<i<<"";   
        for(int j=0;j<adj.size();j++){
            cout<<adj[j]<<"";
        }
        cout<<endl;


    }
    return 0;

}