//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> ind(V,0);
        queue<int> q;
        vector<int> topo;
        for(int i = 0 ; i<V ; i++)
        {
            for(auto x : adj[i])
            ind[x]++;
        }
        for(int i = 0 ; i<V ; i++)
        {
            if(ind[i]==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            topo.push_back(x);
            for(auto it : adj[x])
            {
                ind[it]--;
                if(ind[it]==0)
                q.push(it);
            }
        }
        return topo.size()==V?0:1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends