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
	    // code here
	    int l = 0 , r = n-1, mid, cnt = 0  ;
	    //sort(arr,arr+n);
	    while(l<=r)
	    {
	        mid = (l+r)/2 ;
	        if(arr[mid]==x)
	        break ;
	        if(arr[mid]<x)
	        l = mid+1 ;
	        else
	        r = mid-1 ;
	    }
	    if(arr[mid]==x)
	    {
	        cnt++;
	        int y ;
	        y = mid-1;
	        while(arr[y]==x && y-->=0)
	        cnt++;
	        y = mid+1 ;
	        while(arr[y]==x && y++<n)
	        cnt++;
	    }
	    return cnt;
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