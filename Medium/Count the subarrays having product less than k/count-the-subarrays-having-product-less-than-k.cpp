//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
         long long pdt=1;
         int j=0;
         int ans=0;
         if(k==1)return 0;
    for(int i=0;i<n;i++){
        pdt=pdt*arr[i];
        if(pdt<k){
        ans+=(i-j+1);   
        }
        else{
            while(pdt>=k){
            pdt=pdt/arr[j];
            j++;
            }
            ans+=(i-j+1);
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends