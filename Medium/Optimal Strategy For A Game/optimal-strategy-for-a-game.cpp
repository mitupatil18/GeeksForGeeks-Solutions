//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long solve(int i, int n, int arr[], vector<vector<long long>>& dp) {
        if(i > n)
            return 0;
        if(dp[i][n] != -1)
            return dp[i][n];
        long long ans1 = arr[i] + min(solve(i + 1, n - 1, arr, dp), solve(i + 2, n, arr, dp));
        long long ans2 = arr[n] + min(solve(i + 1, n - 1, arr, dp), solve(i, n - 2, arr, dp));
        return dp[i][n] = max(ans1, ans2);
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        vector<vector<long long>> dp(n + 2, vector<long long>(n + 2, -1));
        return solve(0, n - 1, arr, dp);
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
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends