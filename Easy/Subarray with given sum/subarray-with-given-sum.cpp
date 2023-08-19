//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int>res;
        int i=0;
        int j=0;
        int sum=arr[0];
        if(s==0){
            res.push_back(-1);
            return res;
        }
            while(j<n){
                if(sum==s){
                   res.push_back(i+1);
                    res.push_back(j+1);
                    break;
                }
                else if(sum>s){
                    sum-=arr[i];
                    i++;
                }
                else{
                   j++;
                    if(j<n)
                        sum+=arr[j];
                }
            }
           
            if(res.empty()){
                res.push_back(-1);
            }
                return res;
            
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends