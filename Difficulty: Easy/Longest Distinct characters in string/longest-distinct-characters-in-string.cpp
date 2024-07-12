//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    int i = 0, j = 0 , ans = 0 , n = s.size();
    map<char,int> m;
    while(i<n)
    {
        m[s[i]]++;
        while(j<i && m[s[i]]>1)
        {
            m[s[j]]--;
            if(m[s[j]]==0)
            m.erase(s[j]);
            j++;
        }
        ans = max(ans,i-j+1);
        i++;
    }
    return ans;
    
}