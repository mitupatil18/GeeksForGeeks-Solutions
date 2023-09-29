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
        int i = 0;
        int j = 0;
        int k = 0;
        while(i<A.size())
        {
            j=i;
            while(j<A.size())
            { 
                if (find(B.begin(), B.end(),A.substr(i,j-i+1))!=B.end())
               {
                     k = max(k,j+1);
                }
                j++;
            }
            if(k==A.size()) return 1;           
            if(k<=i)return 0;
        i ++;
        }
       return 0;
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