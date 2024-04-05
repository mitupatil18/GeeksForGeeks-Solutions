//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        int l = 0 , r = n-1 , mid;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(v[mid]==x)
            break;
            if(v[mid]<x)
            l = mid+1;
            else
            r = mid-1;
        }
        if(v[mid]==x)
        return mid;
        while(mid>=0 && v[mid]>x)
        mid--;
        return v[mid]<=x?mid:-1;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends