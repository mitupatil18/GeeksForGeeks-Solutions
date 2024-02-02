//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        for(int i = 0 ; i<s.size();i++)
        {
            if(s[i]>=48 && s[i]<=57)
            continue ;
            else if(s[i]=='-' && i==0)
            continue ;
            else
            return -1 ;
        }
        int res1 = stoi(s);
        return res1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends