//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int i = 0 ,j = 0 , sum = 0 , ans = INT_MAX;
        while(i<n)
        {
            sum += arr[i];
            while(sum>x)
            {
                sum -= arr[j] ;
                ans = min(ans, i-j+1);
                j++ ;
            }
            i++;
        }
        if(ans==INT_MIN)
        return 0;
        return ans ;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends