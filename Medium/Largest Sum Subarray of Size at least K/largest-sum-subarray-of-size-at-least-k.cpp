//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

long long int maxSumWithK(long long int a[], long long int n, long long int k);

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        cout << maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int maxSumWithK(long long int a[], long long int n, long long int k) 
{
    long long int j = 0 , i  = 0 , sum = 0 ,last = 0 , maxSum = INT_MIN ;
    while(j<n)
    {
        sum += a[j] ;
        if(j-i+1==k)
        maxSum = max(maxSum , sum);
        else if(j-i+1>k)
        {
            maxSum = max(maxSum , sum);
            last += a[i] ;
            i++ ;
            if(last<0)
            {
                sum -= last ;
                maxSum = max(maxSum , sum);
                last = 0 ;
            }
        }
        j++ ;
    }
    return maxSum ;
}