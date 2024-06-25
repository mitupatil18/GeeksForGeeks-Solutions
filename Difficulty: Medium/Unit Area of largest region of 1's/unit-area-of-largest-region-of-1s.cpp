//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        int ans = 0 ;
        vector<vector<int>> vis(m,vector<int>(n,0));
        int a[] = {-1,-1,-1,0,0,1,1,1};
        int b[] = {-1,0,1,-1,1,-1,0,1};
        queue<pair<int,int>> q;
        for(int i = 0 ; i<m;i++)
        {
            for(int j = 0 ; j<n;j++)
            {
                if(g[i][j]==1 && !vis[i][j])
                {
                    q.push({i,j});
                    vis[i][j] = 1;
                    int cnt = 0 ;
                    while(!q.empty())
                    {
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();
                        cnt++;
                        for(int i = 0 ; i<8 ;i++)
                        {
                            int nr = r+a[i];
                            int nc = c+b[i];
                            if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && g[nr][nc]==1)
                            {
                                q.push({nr,nc});
                                vis[nr][nc] = 1;
                            }
                        }
                    }
                    ans = max(ans,cnt);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends