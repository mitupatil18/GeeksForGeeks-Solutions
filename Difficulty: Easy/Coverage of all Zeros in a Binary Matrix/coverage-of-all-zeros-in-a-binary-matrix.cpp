//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int FindCoverage(vector<vector<int>>&mat){
        int ans = 0 , n = mat.size(), m = mat[0].size();
        int x[] = {-1,0,1,0};
        int y[] = {0,-1,0,1};
        for(int i = 0 ; i<mat.size();i++)
        {
            for(int j = 0 ; j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    for(int k = 0 ;k<4;k++)
                    {
                        int ni = i+x[k];
                        int nj = j+y[k];
                        if(ni>=0 && nj>=0 && ni<n && nj<m && mat[ni][nj]==1)
                        ans++;
                    }
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
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		Solution obj;
		int ans = obj.FindCoverage(matrix);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends