//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int l = 0 , r = n-1, mid;
        vector<int> v;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(arr[mid]==x)
            break;
            if(arr[mid]<x)
            l = mid+1;
            else
            r = mid-1;
        }
        int a = mid, b = mid;
        while(a>=0 && arr[a]==x)
        a--;
        while(b<n && arr[b]==x)
        b++;
        if(arr[a+1]==x && a!=mid )
        v.push_back(a+1);
        if(arr[b-1]==x && b!=mid )
        v.push_back(b-1);
        if(v.size()==0)
        v = {-1,-1};
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends