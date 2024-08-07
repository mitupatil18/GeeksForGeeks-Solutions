//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int s){
        vector<bool> dp(s+1,false);
        dp[0] = true;
        for(int i = 0 ; i<arr.size() ;i++)
        {
            for(int j = s ; j>=arr[i] ;j--)
            {
                dp[j] = dp[j] || dp[j-arr[i]];
            }
        }
        return dp[s]; 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends