//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        vector<vector<int>>vis(n+1,vector<int>(n+1,0));
        queue<pair<int,int>>q;
        int sx,sy,dx1,dy1;
       
        for(int i = 0;i<n;i++){
            
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 1){
                    sx = i;
                    sy = j;
                    
                    
                }
                else if(grid[i][j]==2){
                    dx1 = i;
                    dy1 = j;
                }
            }
        }
        // cout<<sx<<sy<<dx1<<dy1;
        q.push({sx,sy});
        vis[sx][sy] = 1;
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if(x==dx1 && y==dy1){
                return true;
            }
            for(int i = 0;i<4;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx>=0 && nx<n && ny>=0 && ny<n){
                    if(vis[nx][ny] == 0 && grid[nx][ny]!=0){
                        vis[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends