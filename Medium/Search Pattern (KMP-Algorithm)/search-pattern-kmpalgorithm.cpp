//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector <int> v;
            int n = pat.size() , m = txt.size();
            for(int i = 0 ; i<m-n+1 ;i++)
            {
                
                if(pat[0]==txt[i] && pat[n-1]==txt[i+n-1])
                {
                    int j = 0 ;
                    for( ; j<n ;j++)
                    {
                        if(pat[j]!=txt[i+j])
                        break;
                    }
                    if(j>=n)
                    v.push_back(i+1);
                }
            }
            return v ;
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
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends