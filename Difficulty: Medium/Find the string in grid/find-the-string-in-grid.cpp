//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	void f(int i,int j,int n,int m,vector<vector<char>>&grid, string word,vector<vector<int>>&ans){
      
     
      for (int r=-1;r<=1;r++){
          for(int c=-1;c<=1;c++){
              if (r==0 and c==0) continue;
               int count=1;
              int nr=i+r;
              int nc=j+c;
              while(nr>=0 and nc>=0 and nr<n and nc<m and count<word.size() and word[count]==grid[nr][nc]){
                  nr=nr+r;
                  nc=nc+c;
                  count++;
              }
              if (count==word.size()) {
                  ans.push_back({i,j});
                  return ;
              }
          }
      }
        
    }
    vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j]==word[0]){
                    f(i,j,n,m,grid,word,ans);
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends