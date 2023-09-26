//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int a[], int b[], int n, int m, int x) {
         int i=0;
        int j=m-1;
        int mini=INT_MAX;
        vector<int>v;
        while(i<n and j>=0 ){
            
          int sum=a[i]+b[j];
          
          if (mini>abs(sum-x)){
              mini=abs(sum-x);
              v={a[i],b[j]};
         }
          
          if(sum>=x){
              j--;
          }
          
          else {
              i++;
          }
    }
    return v;  
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends