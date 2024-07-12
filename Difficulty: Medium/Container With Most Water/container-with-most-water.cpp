//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long arr[], int len)
{
    int i = 0 , j = len-1 ;
    long long ans = 0 ;
    while(i<j)
    {
        long long l = min(arr[i],arr[j]);
        ans = max(ans,l*(j-i));
        if(arr[i]<arr[j])
        i++;
        else
        j--;
    }
    return ans;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends