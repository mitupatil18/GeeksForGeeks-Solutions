//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int n) {
        int cnt = 1, i ;
        sort(arr,arr+n);
        for(i = 0 ; i<n ; i++)
        {
            if(arr[i]==arr[i+1])
            {
                cnt++ ;
            }
            else
            {
                if(cnt>1)
                cnt = 1 ;
                else
                return arr[i];
            }
        }
        
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