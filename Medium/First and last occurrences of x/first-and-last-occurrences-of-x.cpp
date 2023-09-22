//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int l = 0 , r = n-1, mid ;
        while(l<=r)
        {
            mid = (l+r)/2 ;
            if(x==arr[mid])
            break;
            if(x<arr[mid])
            r = mid-1 ;
            else
            l = mid+1 ;
        }
        if(l>r)
        return {-1,-1} ;
        vector<int> ans ;
        int z= mid ;
        while(arr[z]==x && z>=0)
        z-- ;
        ans.push_back(z+1);
        z = mid ;
        while(arr[z]==x && z<n)
        z++ ;
        ans.push_back(z-1);
        return ans ;
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