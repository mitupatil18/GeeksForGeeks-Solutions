//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int numberOfPaths(int n, int m){
        // code here
        long long int dp[n][m];
        int mod = 1e9+7;
        long long  int i , j ;
        for(i = 0 ; i<n ; i++)
        dp[i][0] = 1 ;
        for(j = 0 ; j<m ; j++)
        dp[0][j] = 1 ;
        for(i = 1 ; i<n ; i++)
        {
            for(j = 1 ; j<m ; j++)
            {
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
            }
        }
        return dp[n-1][m-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends