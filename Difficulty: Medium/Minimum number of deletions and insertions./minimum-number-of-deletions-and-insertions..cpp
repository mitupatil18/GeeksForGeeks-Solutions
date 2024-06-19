//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string t1, string t2) 
	{ 
	    int n = t1.size(), m = t2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1 ; j<=m;j++)
            {
                if(t1[i-1]==t2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
                else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return n-dp[n][m]+m-dp[n][m];
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends