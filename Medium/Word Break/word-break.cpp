//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        unordered_set<string> dictionary(B.begin(), B.end());
        vector<bool> dp(A.size() + 1, false);
        dp[0] = true; // Empty string is always considered breakable
        
        for (int i = 1; i <= A.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && dictionary.find(A.substr(j, i - j)) != dictionary.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[A.size()] ? 1 : 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends