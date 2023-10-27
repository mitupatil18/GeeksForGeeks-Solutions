//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    void dfs(int u,vector<int>adj[],vector<bool>&vis){
        vis[u]=true;
        for(int &v:adj[u]){
            if(!vis[v]) dfs(v,adj,vis);
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<bool>vis1(V,false);
       int count1=0;
       for(int i=0;i<V;i++){
           if(!vis1[i]){
               count1++;
               dfs(i,adj,vis1);
           }
       }
       
            adj[c].erase(remove(adj[c].begin(), adj[c].end(), d), adj[c].end());
            adj[d].erase(remove(adj[d].begin(), adj[d].end(), c), adj[d].end());
       
       int count=0;
       vector<bool>vis(V,false);
       for(int i=0;i<V;i++){
           if(!vis[i]){
               count++;
               dfs(i,adj,vis);
           }
       }
      if(count==count1) return 0;
      return 1;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


// } Driver Code Ends