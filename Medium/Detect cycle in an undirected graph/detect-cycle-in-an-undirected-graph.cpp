//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool dfs(int node , int parent , vector<int>& vis , vector<int> adj[])
    {
        vis[node] =1 ;
        for(auto x : adj[node])
        {
            if(!vis[x])
            {
                if(dfs(x,node,vis,adj)==true)
                return true ;
            }
            else if(x!=parent) return true;
        }
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        for(int i = 0 ;i<V ;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,-1,vis,adj)==true)
                return true ;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends