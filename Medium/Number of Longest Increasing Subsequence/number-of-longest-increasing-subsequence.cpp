//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int NumberofLIS(int n, vector<int>&nums) {
        // Code here
        vector<int> dp(n,1) , ct(n,1) ;
        int len = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = i-1 ;  j>=0 ; j--)
            {
                if(nums[i]>nums[j])
                {
                    if(dp[i]<dp[j]+1)
                    ct[i] = ct[j] ;
                    else if(dp[i]==1+dp[j])
                    ct[i] += ct[j] ;
                    dp[i] = max(dp[i],1+dp[j]);
                }
            }
            len = max(len,dp[i]);
        }
        int ans = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            if(dp[i]==len)
            ans += ct[i];
        }
        return ans ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.NumberofLIS(n, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends