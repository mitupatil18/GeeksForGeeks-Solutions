//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int  find_and(int l, int r ) 
    {
        while(r>l)
        r = r & r-1;
        return l&r;
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int  l, r;
    	cin >> l >> r;
    	Solution ob;
    	int ans = ob.find_and(l, r);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends