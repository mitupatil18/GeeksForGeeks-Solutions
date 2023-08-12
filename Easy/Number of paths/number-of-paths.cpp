//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
    // Code Here
    vector<vector<long long >> dp(m,vector<long long >(n,1));
    long long  i , j ;
    for(i = 1 ; i<m ; i++)
    {
        for(j = 1 ; j<n ; j++)
        {
            dp[i][j] = dp[i][j-1]+dp[i-1][j];
        }
    }
    return dp[m-1][n-1];
}

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends