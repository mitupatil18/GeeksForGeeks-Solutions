//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(int arr[], int n) {
        int l = 0 , r = n-1;
        while(l<r)
        {
            int mid = (r-l)/2 + l;
            if(arr[mid]<arr[r])
            r = mid;
            else
            l = mid+1;
        }
        return arr[l];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.findMin(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends