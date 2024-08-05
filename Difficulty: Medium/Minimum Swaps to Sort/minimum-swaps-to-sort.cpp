//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&arr)
	{
	    int ans = 0 , n = arr.size();
	    map<int,int> m1;
	    vector<int> v(arr.begin(),arr.end()) ;
	    sort(v.begin(),v.end());
	    for(int i = 0 ; i<n;i++)
	    m1[v[i]] = i;
	    for(int i = 0 ; i<n;i++)
	    {
	        if(m1[arr[i]]!=i)
	        {
	            swap(arr[i], arr[m1[arr[i]]]);
	            ans++;
	            i--;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends