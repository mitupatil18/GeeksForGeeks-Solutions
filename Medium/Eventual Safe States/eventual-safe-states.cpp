//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> Adj[]) {
        vector<int> adj[V];
        vector<int> ind(V,0);
        vector<int> v;
        for(int i = 0 ; i<V ;i++)
        {
            for(auto x : Adj[i])
            {
                adj[x].push_back(i);
                ind[i]++ ;
            }
        }
        queue<int> q;
        for(int i  = 0 ; i<V ; i++)
        {
            if(ind[i]==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            v.push_back(x);
            for(auto it : adj[x])
            {
                ind[it]--;
                if(ind[it]==0)
                q.push(it);
            }
        }
        sort(v.begin(),v.end());
        return v;
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
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends