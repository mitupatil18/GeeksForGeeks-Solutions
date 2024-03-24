//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void find(long long i, long long ind ,long long n,vector<long long>& dp)
    {
        if(i>n)
        return ;
        dp.push_back(i);
        find(i*ind,ind+1,n,dp);
    }
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> dp;
        find(1,2,N,dp);
        return dp;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends