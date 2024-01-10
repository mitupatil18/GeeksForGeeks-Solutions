//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int,int> m;
	    m[0] = -1 ;
	    int sum = 0 , rem , mx = 0;
	    for(int i = 0 ; i<n ;i++)
	    {
	        sum += arr[i] ;
	        rem = sum%k;
	        if(rem==0)
	        mx = max(mx,i+1);
	        if(rem<0)
	        rem += k ;
	        auto itr = m.find(rem);
	        if(itr!=m.end())
	        {
	            mx = max(mx,i-m[rem]);
	        }
	        else
	        m[rem] = i;
	    }
	    return mx;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends