//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int a[], int N){
	    int i = 0 , j = N-1 , m;
	    while(i<j)
	    {
	        m = (i+j)/2 ;
	        if(m%2==0)
	        m-- ;
	        if(a[m]==a[m-1])
	        i = m+1 ;
	        else
	        j = m-1 ;
	    }
	    return a[i];
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends