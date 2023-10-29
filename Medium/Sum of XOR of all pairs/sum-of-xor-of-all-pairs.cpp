//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    vector<int>m(32,0);
        long long total=0;
         for(int i=0;i<n;i++){
            int val=arr[i];
            while(val>0){
                int bits=log2(val);
                 m[bits]++;
                bits=pow(2,bits);
                val-=bits;
            }
        }
        
        for(int i=0;i<32;i++){
            long long val=(n-m[i])*1ll*powl(2,i)*1ll*m[i];
            if(m[i]>0)
            total+=val;
        }
       
          return total;
        }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends