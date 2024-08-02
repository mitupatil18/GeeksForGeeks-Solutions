//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void dfs(int &ans, int m, int n, vector<vector<char>>& g, string word, int wi, int indi, int indj,
    vector<vector<int>>& vis) {
        if (wi == word.size()) {
            ans++;
            return;
        }
        int x[] = {0,-1,0,1};
        int y[] = {-1,0,1,0};
        for (int i = 0; i < 4; i++) {
            int nx = indi + x[i];
            int ny = indj + y[i];
            if (nx >= 0 && ny >= 0 && nx < m && ny < n && g[nx][ny] == word[wi] && !vis[nx][ny]) {
                vis[nx][ny]= 1;
                dfs(ans, m, n, g, word, wi + 1, nx, ny,vis);
                vis[nx][ny]= 0;
            }
        }
}
    int findOccurrence(vector<vector<char> > &g, string t){
        int ans = 0;
        int m = g.size(), n = g[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (t[0] == g[i][j]) {
                    vector<vector<int>> vis(m,vector<int>(n,0));
                    vis[i][j] = 1;
                    dfs(ans, m, n, g, t, 1, i, j,vis);
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
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        Solution obj;
        cout<<obj.findOccurrence(mat,target)<<endl;
    }
}

// } Driver Code Ends