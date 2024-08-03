//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findMaxValue(vector<vector<int>>&mat, int n)
    {
        int m=mat[0].size() ; 
        vector<vector<int>>v=mat  ;
        int res=-1e9; 
        for(int i=1; i<n;i++)  v[i][0]=min(v[i-1][0],v[i][0]) ; 
        for(int j=1; j<m;j++) v[0][j]=min(v[0][j-1],v[0][j]) ; 
        for(int i=1; i<n; i++) {
            for(int j=1; j<m; j++) {
                res=max(res, v[i][j]-v[i-1][j-1]) ; 
                v[i][j]=min({v[i][j],v[i-1][j-1],v[i-1][j],v[i][j-1]}) ; 
            }
        }
        return res; 
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>mat(n,vector<int>(n, 0));
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            cin >> mat[i][j];
	        }
	    }
	    Solution ob;
	    int ans = ob.findMaxValue(mat, n);
	    cout << ans <<endl;
	}
	return 0;
}

// } Driver Code Ends