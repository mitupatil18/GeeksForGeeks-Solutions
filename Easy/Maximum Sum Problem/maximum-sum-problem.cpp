//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int o ;
        int solveRec(int n)
        {
            if(n==0 || n==1)
            return n;
        
        int val1=solveRec(n/2);
        int val2=solveRec(n/3);
        int val3=solveRec(n/4);
        
        return max(n,val1+val2+val3);
        }
        int maxSum(int n)
        {
            o = n ;
            return solveRec(n);
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
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends