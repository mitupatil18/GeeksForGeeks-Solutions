//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string s, int k) {
       vector<int> v(26,0);
       int l = 0, r = 0 , ans = 0 , maxi = 0 ;
       for(r = 0 ; r<s.size();r++)
       {
           v[s[r]-'A']++;
           maxi = *max_element(v.begin(),v.end());
           if((r-l+1)-maxi>k)
           {
               while((r-l+1)-maxi>k)
               {
                   v[s[l]-'A']--;
                   maxi = *max_element(v.begin(),v.end());
                   l++;
               }
           }
           ans = max(ans,r-l+1);
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends