//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long mergeAndCount(long long arr[], long long temp[], long long left, long long mid, long long right) {
    long long i = left;
    long long j = mid + 1;
    long long k = left;
    long long count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            // If arr[i] is greater than arr[j], it means arr[i] is greater than all elements from i to mid.
            count += (mid - i + 1);
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return count;
}

long long mergeSortAndCount(long long arr[], long long temp[], long long left, long long right) {
    long long count = 0;
    if (left < right) {
        long long mid = left + (right - left) / 2;
        count += mergeSortAndCount(arr, temp, left, mid);
        count += mergeSortAndCount(arr, temp, mid + 1, right);
        count += mergeAndCount(arr, temp, left, mid, right);
    }
    return count;
}

long long inversionCount(long long arr[], long long N) {
    long long temp[N];
    return mergeSortAndCount(arr, temp, 0, N - 1);
}

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends