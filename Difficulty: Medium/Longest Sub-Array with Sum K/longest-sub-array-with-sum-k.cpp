//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        int sum = 0 , ans = 0;
        unordered_map<int,int> m;
        for(int i = 0; i<n;i++)
        {
            sum += arr[i];
            if(sum==k)
            ans= max(ans,i+1);
            int rem =  sum-k;
            if(m.find(rem)!=m.end())
            ans = max(ans,i-m[rem]);
            if(m.find(sum)==m.end())
            m[sum] = i;
        }
        return ans;
    } 

};


//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends