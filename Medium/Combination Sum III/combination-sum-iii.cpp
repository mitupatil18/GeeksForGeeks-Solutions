//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<vector<int>> ans ;
  void find(int i , vector<int>& nums, vector<int>& ds , int t , int k)
  {
      if(i>=nums.size())
      {
          if(ds.size()==k && t==0)
          ans.push_back(ds);
          return ;
      }
      if(nums[i]<=t)
      {
          ds.push_back(nums[i]);
          find(i+1,nums,ds,t-nums[i],k);
          ds.pop_back();
      }
      find(i+1,nums,ds,t,k);
  }
    vector<vector<int>> combinationSum(int K, int N) {
        vector<int> nums ;
        vector<int> ds;
        for(int i = 1 ; i<=9 ;i++)
        nums.push_back(i);
        find(0,nums,ds,N,K);
        return ans ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends