//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        stack<char> stk;
        int i = 0  ;
        stk.push(S[i++]);
        while(i<S.size())
        {
            if(S[i]!=stk.top())
            stk.push(S[i]);
            i++;
        }
        string ans = "" ;
        while(!stk.empty())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends