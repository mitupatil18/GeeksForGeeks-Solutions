//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int n, int m)
    {
        //code here
        int dp[n][m];
        int i , j ;
        for(i = 0 ; i<n ; i++)
        dp[i][0] = 1 ;
        for(j = 0 ; j<m ; j++)
        dp[0][j] = 1 ;
        for(i = 1 ; i<n ; i++)
        {
            for(j = 1 ; j<m ; j++)
            {
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends