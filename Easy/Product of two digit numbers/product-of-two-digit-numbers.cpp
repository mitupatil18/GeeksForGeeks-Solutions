//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long prodTwoDigit(long long n) {
        if(n==0) return 0;
        long long m = 1e9+7 ;
        long long x = n , ans = 1;
        vector<int> v ;
        while(x>0)
        {
            int a = x%10 ;
            x = x/10 ;
            int b = x%10 ;
            x /=10 ;
            v.push_back(b*10+a);
        }
        for(int i = 0 ; i<v.size() ; i++)
        {
            ans *= v[i];
            ans %= m ;
        }
        return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.prodTwoDigit(N) << endl;
    }
    return 0;
}
// } Driver Code Ends