//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        set<int> v ;
        sort(arr,arr+n);
        int cnt = 1 ;
        for(int i = 0 ; i<n-1 ; i++)
        {
            if(arr[i]==arr[i+1])
            cnt++;
            else
            {
                if(v.find(cnt)!=v.end())
                return false ;
                else
                v.insert(cnt);
                cnt = 1;
            }
        }
        return true ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends