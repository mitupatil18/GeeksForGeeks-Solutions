//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
 
 
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i = 0 , j = 0 , n = s.size(), ans = -1 ;
        map<char,int> m;
        for(int i = 0 ; i<n;i++)
        {
            m[s[i]]++;
            while(m.size()>k && j<=i)
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                m.erase(s[j]);
                j++;
            }
            if(m.size()==k)
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends