//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    stack<int> ans ;
        ans.push(-1);
        int i = n-1 ;
        int max = arr[i] ;
        i-- ;
        while(i>=0)
        {
            ans.push(max);
            if(max<arr[i])
                max = arr[i];
            i-- ;
        }
        i = 0 ;
        while(!ans.empty())
        {
            arr[i] = ans.top();
            ans.pop() ;
            i++ ;
        }
	}


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends