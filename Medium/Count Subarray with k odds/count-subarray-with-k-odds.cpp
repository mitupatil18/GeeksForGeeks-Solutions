//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubarray(int n, vector<int>& nums, int k) {
        for(int i = 0 ; i<n ;i++)
        {
            if(nums[i]%2!=0)
            nums[i] = 1 ;
            else
            nums[i] = 0;
        }
        map<int,int> m;
        int cnt = 0, sum = 0 ;
        for(int i = 0 ; i<n ;i++)
        {
            sum += nums[i];
            if(sum==k)
            cnt++;
            if(m.find(sum-k)!=m.end())
            cnt += m[sum-k];
            m[sum]++;
        }
        return cnt ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends