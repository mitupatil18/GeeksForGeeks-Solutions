//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        int i  = 0 , zero = -1, one = -1, two = -1 , ans = INT_MAX ;
        while(i<s.size())
        {
            if(s[i]=='0')
            zero = i ;
            else if(s[i]=='1')
            one= i;
            else
            two = i ;
            if(zero>-1 && one>-1 && two>-1)
            {
                int mx = max(zero,max(one,two));
                int mn = min(zero,min(one,two));
                ans = min(ans,mx-mn+1);
            }
            i++ ;
        }
        return ans==INT_MAX?-1:ans ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends