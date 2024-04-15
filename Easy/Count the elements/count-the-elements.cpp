//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        sort(b.begin(),b.end());
        vector<int> v(q,0);
        int c = 0 ;
        for(int i = 0 ; i<query.size() ;i++)
        {
            int t = a[query[i]];
            int l = 0 , r = b.size()-1 , mid, ans = -1;
            while(l<=r)
            {
                mid = l+(r-l)/2;
                if(b[mid]<=t)
                {
                    ans = mid;
                    l = mid+1;
                }
                else
                r= mid-1;
            }
            if(ans==b.size()) 
            v[c]=b.size();
            else 
            v[c]=ans+1;
            c++;
        }
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
        vector<int> a, b, ans;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }
        int q;
        cin >> q;
        vector<int> query;
        for (int i = 0; i < q; i++) {
            cin >> input;
            query.push_back(input);
        }
        Solution obj;
        ans = obj.countElements(a, b, n, query, q);
        for (int i = 0; i < q; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
// } Driver Code Ends