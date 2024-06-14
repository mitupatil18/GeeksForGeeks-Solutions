//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int find(vector<int>& dp, vector<int>& h, int n)
    {
        if(n==1)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        int one = find(dp,h,n-1)+abs(h[n-1]-h[n-2]);
        int sec = (n>2)? find(dp,h,n-2)+abs(h[n-1]-h[n-3]):INT_MAX;
        return dp[n] = min(one,sec);
    }
    int minimumEnergy(vector<int>& h, int n) {
        vector<int> dp(n+1,-1);
        return find(dp,h,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends