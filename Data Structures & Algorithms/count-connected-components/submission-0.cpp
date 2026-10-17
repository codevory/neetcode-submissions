class Solution {
    void dfs(vector<vector<int>>& adj,vector<bool>& visited,int node){
        
      visited[node] = true;
      for(int nei : adj[node]){
        if(!visited[nei]){
            dfs(adj,visited,nei);
        }
      }
        
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
     
     int count = 0;
     vector<vector<int>>adj(n);
     vector<bool> visited(n,false);

    for(const auto& edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

     for(int node = 0; node < n; ++node){
       if(!visited[node]){
        dfs(adj,visited,node);
        count += 1;
       }

     }

     return count;
    }
};
