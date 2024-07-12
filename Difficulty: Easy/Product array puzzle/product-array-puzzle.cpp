//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        vector<long long int> ans;
        long long int prod = 1;
        int zero = 0 ;
        for(auto x : nums)
        {
            if(x!=0)
            prod *= x; 
            else
            zero++;
        }
        for(auto x : nums)
        {
            if(zero>1)
            ans.push_back(0);
            else if(zero==1 && x==0)
            ans.push_back(prod);
            else if(zero==1 && x!=0)
            ans.push_back(0);
            else if(x!=0 && zero==0)
            {
                ans.push_back(prod/x);
            }
            
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends