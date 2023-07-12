//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    long long int findSubarray(vector<long long int> &arr, int n ) {
       long long ans=0, zero=0, presum=0;

        unordered_map<long long, long long>mpp;

        for(int i=0;i<n;i++){

            presum+=arr[i];
            if(presum==0) ans++;
            mpp[presum]++;

        }

        for(auto it:mpp) {

            long long x=it.second;
            ans+= (x*(x-1))/2;

        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends