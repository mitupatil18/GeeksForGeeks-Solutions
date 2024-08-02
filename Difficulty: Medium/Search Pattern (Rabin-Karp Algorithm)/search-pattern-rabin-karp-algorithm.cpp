//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string p, string t)
        {
            vector<int> v;
            int hashv = 0, sum = 0 , n = t.size() ;
            for(auto x : p)
            hashv += x-'a'+1;
            int i = 0 , j = 0, sz = p.size() ;
            while(j<sz)
            {
                sum += t[j]-'a'+1 ;
                j++;
            }
            while(j<=n)
            {
                if(sum==hashv)
                {
                    int k = i, l = 0;
                    while(k<i+sz)
                    {
                        if(t[k]!=p[l])
                        break;
                        k++;
                        l++;
                    }
                    if(k==i+sz)
                    v.push_back(i+1);
                }
                if (j < n) {  // Ensure j is within bounds before updating sum
            sum += t[j] - 'a' + 1;
            sum -= t[i] - 'a' + 1;
        }
                j++ ;
                i++;
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