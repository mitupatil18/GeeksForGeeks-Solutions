//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define long long long long
class Solution{
public:
    int MOD = 1e9+7;
    vector<long long> nthRowOfPascalTriangle(int n) {
        long long i , j;
        vector<vector<long long>> ans ;
        ans.push_back({1});
        for(i = 1 ; i<n ; i++)
        {
            vector<long long> v ;
            v.push_back(1);
            for(j = 1 ; j<i ; j++)
            {
                v.push_back((ans[i-1][j-1]+ans[i-1][j])%MOD);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans[n-1] ;
    }
};



//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends