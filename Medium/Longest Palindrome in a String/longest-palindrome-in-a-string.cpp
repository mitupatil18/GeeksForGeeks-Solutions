//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longpallin(string s)
    {
        int h , l , start = 0 , end = 1 ,i;
        string tmp ;
        for(int i = 1 ; i<s.size();i++)
        {
            l = i-1 ;
            h = i ;
            while(l>=0 && h<s.size() && s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start = l ;
                    end = h-l+1 ;
                }
                l--;
                h++;
            }
        }
        for(int i = 1 ; i<s.size();i++)
        {
            l = i-1 ;
            h = i+1 ;
            while(l>=0 && h<s.size() && s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start = l ;
                    end = h-l+1 ;
                }
                l--;
                h++;
            }
        }
        for(i = start ; i<=(start+end-1) ; i++)
        tmp.push_back(s[i]) ;
        return tmp ;
    }
    string longestPalin (string S) {
        return longpallin(S) ;
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