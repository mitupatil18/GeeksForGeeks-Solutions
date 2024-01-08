//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int cnt = 0 , zero = 0, one = 0 , n = str.size(), i, end = -1 ;
        for(i = 0 ; i<n;i++)
        {
            if(str[i]=='0')
            zero++ ;
            else
            one++ ;
            if(zero==one)
            {
                cnt++ ;
                end = i ;
            }
        }
        if(end!=n-1)
        return -1 ;
        return cnt;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends