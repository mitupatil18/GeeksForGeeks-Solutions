//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
         string s = "" ;
         long long int t = n ;
         while(t>0)
         {
             int r = (t-1)%26;
             char l = 'A'+r ;
             s = l+s ;
             t = (t-1)/26 ;
         }
         return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends