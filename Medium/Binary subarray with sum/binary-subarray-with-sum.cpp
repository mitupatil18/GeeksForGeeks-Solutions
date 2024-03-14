//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int numberOfSubarrays(vector<int>& nums, int N, int target){
        unordered_map<int,int> m ;
        int sum = 0 , res = 0 ;
        for(int i = 0 ; i<N ;i++)
        {
            sum += nums[i];
            if(sum==target)
            res++;
            if(m.find(sum-target)!=m.end())
            res += m[sum-target];
            m[sum]++ ;
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
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends