//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        int c = n/k , cnt = 1 , ans = 0 ;
        sort(arr,arr+n);
        for(int i = 0 ; i<n ; i++)
        {
            if(arr[i]==arr[i+1])
            {
                cnt++ ;
            }
            else
            {
                if(cnt>c)
                ans++ ;
                cnt = 1 ;
            }
        }
        if(cnt>c)
        ans++ ;
        return ans ;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends