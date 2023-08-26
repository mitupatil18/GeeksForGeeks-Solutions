//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string a) {
        string b = a ;
        reverse(b.begin(),b.end());
        int n = a.size() ;
        int dp[n+1][n+1] , i , j ;
        memset(dp,0,sizeof(dp));
        for(i = 0 ; i<=n ; i++)
        {
            for(j = 0 ; j<=n ; j++)
            {
                if(i==0 || j==0)
                dp[i][j] = 0;
                else if(a[i-1]!=b[j-1])
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                else
                dp[i][j] = dp[i-1][j-1]+1 ;
            }
        }
        return dp[n][n];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends