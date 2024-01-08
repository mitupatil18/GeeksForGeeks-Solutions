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
    if(s.size()&1)return -1;
    int ans=0,o=0,c=0;
    for(char ch:s){
        ch=='{'?o++:c++;
        if(c>o)ans++,o++,c--;
    }
    return ans+(o-c)/2;
    
}