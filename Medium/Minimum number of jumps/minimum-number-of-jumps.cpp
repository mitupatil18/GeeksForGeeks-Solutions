//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
       int j = 0 , s = 0 , e = 0 ;
       for(int i = 0 ; i<n-1 ; i++)
        {
            e = max(e,arr[i]+i);
            if(s==i)
            {
                s = e ;
                j++ ;
            }
        }
        if(s<n-1)
        return -1 ;
        return j ;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends