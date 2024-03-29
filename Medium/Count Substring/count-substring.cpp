//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        int i = 0 , j = 0 , cnt = 0 , n = s.size();
        map<char,int> m;
            while(j<n)
            {
                m[s[j]]++;
                while(m.size()==3)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                        
                    }
                    cnt+=n-j;
                    i++;
                }
                j++;
            }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends