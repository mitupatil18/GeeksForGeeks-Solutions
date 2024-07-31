//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int ans = 0, cnt = 0 , n = s.size();
        string z;
        for(int i = 0 ; i<n;i++)
        {
            int a = i-1 , b = i+1;
            while(a>=0 && b<n && s[a]==s[b])
            {
                a--;
                b++;
            }
            if(b-a>ans)
            {
                ans = max(ans,b-a);
                z = s.substr(a+1,b-a-1);
            }
            a = i , b = i+1;
            while(a>=0 && b<n && s[a]==s[b])
            {
                a--;
                b++;
            }
            if(b-a>ans)
            {
                ans = max(ans,b-a);
                z = s.substr(a+1,b-a-1);
            }
        }
        return z;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends