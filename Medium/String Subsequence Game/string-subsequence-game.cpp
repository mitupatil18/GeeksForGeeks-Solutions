//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  set<string> v;
    void find(string s , int i, string t)
    {
        if(t.size()>1)
        {
            if(t[0]=='a' || t[0]=='e' || t[0]=='o' || t[0]=='i' || t[0]=='u')
            {
                if(t[t.size()-1]!='a' && t[t.size()-1]!='e' && t[t.size()-1]!='i' && t[t.size()-1]!='o' &&t[t.size()-1]!='u')
                v.insert(t);
            }
        }
        if(i==s.size())
        return ;
        find(s,i+1,t+s[i]);
        find(s,i+1,t);
    }
    set<string> allPossibleSubsequences(string s) {
        find(s,0,"");
        return v;
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
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends