// 1971. Find if Path Exists in Graph

// 1-DFS approach
class Solution {
public:
    bool checkIfPathExists(unordered_map<int,vector<int>> &mp,int S,int D,vector<bool>visited ){
        if(S == D) return true;

        if(visited[S]==true) return false;

        visited[S]= true;

        for(auto &node:mp[S]){
            if(checkIfPathExists(mp,node,D,visited)==true) {
                return true;

            }
        }
        return false;

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;

        // build the graph using adj list

        for(auto &edge:edges){
            int u = edge[0];
            int v = edge[1];

            // bi-directional h ye 
            mp[u].push_back(v);
            mp[v].push_back(u);
        }

        vector<bool>visited(n,false);

        return checkIfPathExists(mp,source,destination,visited);
       
    }
};