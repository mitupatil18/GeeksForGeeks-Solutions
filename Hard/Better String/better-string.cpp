//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int distinctSubsequences(string s)
    {
        vector<int>vis(26,0);
        vector<long>pow(s.size()+1);
        int mod = 1e9 + 7;
     
        pow[0]=1;
        int flag =0;
        for(int i=1;i<=s.size();i++)
        {
                pow[i]=(pow[i-1]*2)%mod;
            if(vis[s[i-1]-'a']!=0)
            {
                pow[i]=(pow[i]-pow[vis[s[i-1]-'a']-1] + mod)%mod;
            }
            vis[s[i-1]-'a']=i;
            
        }
        return pow[s.size()];
    }
    string betterString(string str1, string str2) 
    {
        return distinctSubsequences(str1)>=distinctSubsequences(str2) ? str1:str2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends