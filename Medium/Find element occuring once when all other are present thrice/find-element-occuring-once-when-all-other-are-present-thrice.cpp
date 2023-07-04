//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int nums[] ,int N) {
        // code here
        if(N==1) return nums[0] ;
        sort(nums, nums+N);

        int ans, i ;
        for( i = 0 ; i<N-3; i +=3)
        {
            if(nums[i]!=nums[i+2])
                break ; 
        }
        if(i!=N-3)
            return nums[i];
        for(;i<N-1;i++)
        {
            if(nums[i]!=nums[i+1])
                return nums[i+1];
        }
         return nums[i+1] ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends