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
        vector<vector<string> > z;
       vector<string> v = string_list ;
        map<string, vector<string>> m;
        for(int i = 0 ; i<string_list.size() ;i++)
        {
            v[i] = string_list[i];
            sort(v[i].begin(),v[i].end());
        }
        for(int i = 0 ; i<string_list.size() ;i++)
        {
            m[v[i]].push_back(string_list[i]);
        }
        for(auto x : m)
        {
            z.push_back(x.second);
        }
        return z;
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