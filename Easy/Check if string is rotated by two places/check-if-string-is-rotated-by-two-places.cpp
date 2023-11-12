//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n1=str1.size();
        int n2=str2.size();
        if(n1!=n2)
        return false;
        int ans1=true,ans2=true;
        for(int i=0;i<n2;i++)
        {
            if(str1[(i+2)%n1]!=str2[i] && ans1!=false)
            ans1=false;
            if(str1[(n1+i-2)%n1]!=str2[i] && ans2!=false)
            ans2=false;
            if(!ans1 && !ans2)
            return false;
        }
        return true;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends