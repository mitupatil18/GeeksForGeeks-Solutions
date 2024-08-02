//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        unordered_set<char> s;
        for(auto x : str)
        s.insert(x);
        int size = s.size();
        unordered_map<char,int> m;
        int i  = 0 , j = 0 , ans = INT_MAX ;
        for(i = 0 ; i<str.size();i++)
        {
            m[str[i]]++;
            while(m.size()>=size)
            {
                m[str[j]]--;
                if(m[str[j]]==0)
                {
                    m.erase(str[j]);
                }
                ans = min(ans,i-j+1);
                if(ans==size)
                break;
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends