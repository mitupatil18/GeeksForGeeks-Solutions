//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string p, string t)
        {
           vector <int> v;
            int n = t.size() , m = p.size() ;
            for(int i = 0 ; i<n-m+1; i++)
            {
                if(p[0]==t[i] && p[m-1]==t[i+m-1])
                {
                    int j ;
                    for(j = 0 ; j<=m-1 ;j++)
                    {
                        if(p[j]!=t[i+j])
                        break;
                    }
                    if(j>m-1)
                    v.push_back(i+1);
                }
            }
            return v;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends