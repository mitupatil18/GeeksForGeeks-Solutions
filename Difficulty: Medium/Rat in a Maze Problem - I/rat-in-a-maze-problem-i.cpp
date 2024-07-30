//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  vector<string> v;
    void move(string& s, int i , int j, int m , int n, vector<vector<int>>& vis, vector<vector<int>>& mat)
    {
        if(i>=m || j>=n)
        return ;
        if(vis[i][j]==1 || mat[i][j]==0)
        return;
        if(i==m-1 && j==n-1)
        {
            v.push_back(s);
            return;
        }
        vis[i][j] = 1;
        int x[] = {0,-1,0,1};
        int y[] = {-1,0,1,0};
        for(int a = 0 ; a<4;a++)
        {
            int nx = i+x[a];
            int ny = j+y[a];
            if(nx<m && ny<n && nx>=0 && ny>=0 && vis[nx][ny]==0 && mat[nx][ny]==1)
            {
                if(x[a]==-1)
                s+= "U";
                else if(x[a]==1)
                s+="D";
                else if(y[a]==1)
                s+="R";
                else if(y[a]==-1)
                s+="L";
                move(s,nx,ny,m,n, vis, mat);
                s.pop_back();
            }
        }
        vis[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));
        string s;
        if(mat[0][0]==0)
        return {};
        move(s,0,0,m,n,vis,mat);
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends