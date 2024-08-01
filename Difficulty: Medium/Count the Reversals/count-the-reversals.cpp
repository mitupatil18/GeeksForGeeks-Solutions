//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    stack<char> stk;
    int ans = 0 ;
    for(int i = 0 ; i<s.size();i++)
    {
        if(s[i]=='{')
        {
            stk.push(s[i]);
        }
        else
        {
            if(stk.empty())
            {
                ans++;
                s[i] = '{';
                stk.push(s[i]);
            }
            else
            stk.pop();
        }
    }
    int n = stk.size();
    if(n%2!=0)
    return -1;
    ans += n/2;
    return ans;
}