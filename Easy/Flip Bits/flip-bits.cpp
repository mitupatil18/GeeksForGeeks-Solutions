//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int mx=0;
        int one=0, zero=0;
        for(int i=0; i<n; ++i){
            if(a[i]==1){
                one++;
                zero--;
                if(zero<0) zero=0;
            }else if(a[i]==0){
                zero++;
                mx=max(zero, mx);
            }
        }
        return one+mx;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends