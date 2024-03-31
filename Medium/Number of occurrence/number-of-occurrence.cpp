//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int l = 0 , r = n-1, mid, ans = 0 ;
	    while(l<=r)
	    {
	        mid = (l+r)/2;
	        if(arr[mid]==x)
	        break;
	        if(arr[mid]<x)
	        l = mid+1 ;
	        else
	        r = mid-1;
	    }
	    if(l>r)
	    return ans;
	    ans++;
	    int i = mid-1;
	    while(i>=0 && arr[mid]==arr[i])
	    i--;
	    ans += mid-i-1 ;
	    i = mid+1;
	    while(i<n && arr[mid]==arr[i])
	    i++;
	    ans += (i-mid-1) ;
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends