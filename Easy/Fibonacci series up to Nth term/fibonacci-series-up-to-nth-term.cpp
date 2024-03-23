//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   int MOD=1e9+7;
  int find(int n, vector<int>& v)
  {
      if(n<=0)
      return v[0] = 0;
      if(n==1)
      return v[1] = 1;
      if (v[n] != 0)  // Check if value already calculated
        return v[n];
      return v[n] = (find(n-1,v)+find(n-2,v))%MOD;
  }
    vector<int> Series(int n) {
        vector<int> v(n+1,0);
        int x = find(n,v);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends