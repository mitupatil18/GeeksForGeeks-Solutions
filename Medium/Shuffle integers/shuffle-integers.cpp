//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    vector<int> v ;
	    int i = 0 , j = n/2 ;
	    while(i<n/2 && j<n)
	    {
	        v.push_back(arr[i]);
	        v.push_back(arr[j]);
	        i++ ; 
	        j++ ;
	    }
	    for(int i = 0 ; i<n ; i++)
	    arr[i] = v[i] ;
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends