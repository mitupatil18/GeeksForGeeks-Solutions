//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(int i, int j1, int j2,int r, int c, vector<vector<int>>& grid,
    vector<vector<vector<int>>> &dp){
        if(j1<0 || j2<0 || j1>=c || j2>=c) return -1e7;
        if(i ==  r-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }
        
        if(dp[i][j1][j2] != -1)return dp[i][j1][j2]; 
        
        int maxi = -1e7;
        for(int k=-1;k<2;k++){
            for(int j=-1;j<2;j++){
                int val = 0;
                if(j1==j2){
                    val += grid[i][j1];
                }else{
                    val = grid[i][j1] + grid[i][j2];
                }
                val += f(i+1,j1+k,j2+j,r,c,grid,dp);
                maxi = max(maxi,val);
            }
        }
        return dp[i][j1][j2] = maxi;
    }
    int solve(int n, int m, vector<vector<int>>& grid) {
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        
        return f(0,0,m-1,n,m,grid,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends