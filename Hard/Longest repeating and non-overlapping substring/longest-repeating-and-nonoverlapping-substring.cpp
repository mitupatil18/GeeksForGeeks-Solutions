//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> lpsFind(string needle){
        int n = needle.size();
        vector<int> lps(n, 0);
        
        int prevLps = 0;
        int i = 1;
        while(i < n){
            if(needle[i] == needle[prevLps]){
                lps[i] = prevLps+1;
                i++;
                prevLps++;
            }else{
                if(prevLps == 0){
                    lps[i] = 0;
                    i++;
                }else{
                    prevLps = lps[prevLps-1];
                }
            }
        }
        return lps;
    }
  
    string longestSubstring(string s, int n) {
        
        string str = "";
        string ans = "";
        for(int i=n-1; i>=0; i--){
            
            str = s[i] + str;
            vector<int> lps = lpsFind(str);
            int m = lps.size();
            
            string curr = "";
            int maxi = *max_element(lps.begin(), lps.end());
            
            int lastOcc = -1;
            for(int k=0; k<m; k++){
                if(lps[k] == maxi) lastOcc = k;
            }
            for(int k=0; k<maxi; k++){
                if(k+k >= lastOcc) break;
                curr += str[k];
            }
            if(ans.size() <= curr.size()) ans = curr;
        }
        return ans.size() == 0 ? "-1" : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends