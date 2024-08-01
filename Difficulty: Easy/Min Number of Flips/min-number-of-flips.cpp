//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    int ans = INT_MAX , cnt = 0 ;
    string s= S;
    int n = s.size();
    for(int i = 0 ; i<n ;i++)
    {
        if(i%2==0 && s[i]!='0')
        {
            s[i] = '0';
            cnt++;
        }
        else if(i%2!=0 && s[i]=='0')
        {
            s[i] = '1';
            cnt++;
        }
    }
    ans = min(ans,cnt);
    cnt = 0 ;
    s = S;
    for(int i = 0 ; i<n ;i++)
    {
        if(i%2==0 && s[i]!='1')
        {
            s[i] = '1';
            cnt++;
        }
        else if(i%2!=0 && s[i]=='1')
        {
            s[i] = '0';
            cnt++;
        }
    }
    ans = min(ans,cnt);
    return ans;
}