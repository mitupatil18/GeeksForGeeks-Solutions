//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> v;
        map<string, vector<string>> m;
        int n = string_list.size();
        for(int i = 0 ;i<n ;i++)
        {
            string z = string_list[i];
            sort(z.begin(),z.end());
            m[z].push_back(string_list[i]);
        }
        for(auto x : m)
        {
            vector<string> z;
            vector<string> c = x.second;
            for(int i = 0 ; i<c.size();i++)
            z.push_back(c[i]);
            v.push_back(z);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends