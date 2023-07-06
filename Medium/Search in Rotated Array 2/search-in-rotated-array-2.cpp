//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        int l = 0 , r = N-1 , mid;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(A[mid]==Key || A[l]==Key || A[r]==Key)
            return true ;
            if(A[mid]<Key)
            r--;
            else
            {
                l++;
                r--;
            }
        }
        return false ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends