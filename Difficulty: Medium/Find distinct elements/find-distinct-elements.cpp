//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int distinct(vector<vector<int>> mat, int n)
    {
        map<int,int> m;
        for(int i = 0 ;i<n;i++)
        {
            unordered_set<int> s;
            for(int j = 0 ; j<n ;j++)
            {
                s.insert(mat[i][j]);
            }
            for(auto x : s)
            m[x]++;
        }
        int ans = 0 ;
        for(auto x : m)
        {
            if(x.second==n)
            ans++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends