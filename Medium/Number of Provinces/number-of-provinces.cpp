//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numProvinces(vector<vector<int>> conn, int n) {
        vector<int> vis(n,0);
        int ans = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            if(vis[i]==1)
            continue;
            ans++;
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int x = q.front();
                q.pop();
                vis[x] = 1;
                for(int j = 0 ; j<n ; j++)
                {
                    if(conn[x][j]==1 && !vis[j])
                    {
                        q.push(j);
                    }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends