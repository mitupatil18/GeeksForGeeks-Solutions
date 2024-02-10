//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends

int find(char s[], int l ,int r, int n)
{
    int cnt = 0 ;
    while(l>=0 && r<n && s[l--]==s[r++])
    {
        cnt++ ;
    }
    return cnt ;
}
int CountPS(char s[], int n)
{
    int ans = 0 ;
    for(int i = 0 ; i<n ;i++)
    {
        int even = find(s,i,i+1, n);
        int odd = find(s,i-1,i+1,n);
        ans += even+odd ;
    }
    return ans ;
}