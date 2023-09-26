//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n)
    {
        long i = 0 , j = 0 , sum = 0 , maxSum = INT_MIN ;
        while(j<n)
        {
            sum += a[j] ;
            if(j-i+1>=k)
            {
                maxSum = max(maxSum , sum) ;
                sum = sum-a[i++];
            }
            j++ ;
        }
        return maxSum ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends