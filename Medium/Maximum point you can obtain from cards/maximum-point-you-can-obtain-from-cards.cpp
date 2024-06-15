//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maxScore(vector<int> &cp, int n, int k) {
        long long  lsum = 0 , rsum = 0 , ans= 0 ;
        int i = 0 ,j = n-1 ;
        for(i = 0 ; i<k;i++)
        lsum += cp[i];
        if(k==n)
        return lsum;
        ans = lsum;
        j = n-1;
        i = k-1;
        while(i>=0 && j>=n-k)
        {
            lsum = lsum-cp[i];
            rsum = rsum+cp[j];
            ans = max(ans,lsum+rsum);
            i--;
            j--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> cardPoints(N);
        for (int i = 0; i < N; i++) cin >> cardPoints[i];

        Solution obj;
        cout << obj.maxScore(cardPoints, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends