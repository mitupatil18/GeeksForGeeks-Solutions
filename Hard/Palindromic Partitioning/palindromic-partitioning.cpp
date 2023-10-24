//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[500][500];
    bool isPal(int i,int j,string &s){
        while(i<j)if(s[i++]!=s[j--])return 0;return 1;
    }
    int solve(int st,int end,string &s){
        if(end==s.size())return isPal(st,end-1,s)?0:1e5;
        if(dp[st][end]!=-1)return dp[st][end];
        int par=1e9,npar=0;
        npar=solve(st,end+1,s);
        if(isPal(st,end,s))par=1+solve(end+1,end+1,s);
        return dp[st][end]=min(par,npar);
    }
    int palindromicPartition(string s)
    {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,s);
    } 
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends