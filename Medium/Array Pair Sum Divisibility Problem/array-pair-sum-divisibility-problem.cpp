//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()%2!=0)
        return 0;
        if(k==1)
        return true;
        int n = nums.size() , cnt = 0 ;
        vector<int> v(k,0);
        for(int i = 0 ; i<n ; i++)
        {
            v[nums[i]%k]++ ;
        }
        if(v[0]%2!=0)return false;
        for(int i = 1 ; i<k ; i++)
        {
                int x = k-i;
                if(i==x && v[i]%2!=0)
                return 0 ;
                if(v[i]!=v[x] )
                return 0 ;
                else
                cnt++ ;
            
        }
        
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Endshttps://media.geeksforgeeks.org/img-practice/prod/courses/1/Web/Content/3-90-fab-v3_1703855049.svg