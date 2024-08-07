//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string t1, string t2, int n, int m)
    {
        int ans = 0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1 ; j<=m;j++)
            {
                if(t1[i-1]==t2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
                ans = max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends