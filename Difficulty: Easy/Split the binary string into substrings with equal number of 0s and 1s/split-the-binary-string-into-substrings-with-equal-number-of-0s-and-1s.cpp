//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int z =  0 , o = 0 , ans = 0 , end = -1, n = str.size();
        for(int i = 0 ; i<n;i++)
        {
            if(str[i]=='0')
            z++;
            else
            o++;
            if(z==o)
            {
                end = i;
                ans++;
            }
        }
        if(end!=n-1)
        return -1 ;
        return ans;
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