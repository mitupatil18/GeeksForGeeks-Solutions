//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  int find(vector<int>&arr,int n,int counter,int index,vector<vector<int>>&dp)
  {
      if(index==n)
      return 0 ;
      if(dp[index][counter]!=-1)
      return dp[index][counter];
      int take=INT_MIN;
      if(counter!=2)
          take=arr[index] + find(arr,n,counter+1,index+1,dp);
      int nottake=0+ find(arr,n,0,index+1,dp);
      return dp[index][counter]=max(take,nottake);
      
  }
  int findMaxSum(vector<int>& a){
      int n=a.size();
      vector<vector<int>> dp(n,vector<int>(3,-1));
      int sum=find(a,n,0,0,dp);
      return sum;
  }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        int ans = ob.findMaxSum(a);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends