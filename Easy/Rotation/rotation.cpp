//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int x= arr[0];
	    int l = 0 , r = n-1 , m;
	    sort(arr,arr+n);
	    while(l<=r)
	    {
	        m = (l+r)/2;
	        if(arr[m]==x)
	        break;
	        if(arr[m]<x)
	        l =m+1;
	        else
	        r = m-1;
	    }
	    if(x==arr[0])
	    return 0;
	    return n-m;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends