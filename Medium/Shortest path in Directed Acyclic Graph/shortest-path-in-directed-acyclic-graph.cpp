//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<pair<int, int>> adjacencyList[N];
        for(vector<int> v:edges) {
            adjacencyList[v[0]].push_back({v[1], v[2]});
        }
        vector<int> ans(N, -1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        while(!pq.empty()) {
            int distFrom_vertex_0=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(ans[node]!=-1 && ans[node]<distFrom_vertex_0) {
                continue;
            }
            ans[node]=distFrom_vertex_0;
            for(pair<int, int> p:adjacencyList[node]) {
                pq.push({(distFrom_vertex_0+p.second), p.first});
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends