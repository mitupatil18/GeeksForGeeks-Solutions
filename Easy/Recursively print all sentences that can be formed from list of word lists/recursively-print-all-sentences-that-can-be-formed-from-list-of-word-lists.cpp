//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<vector<string>> v ;
    void find(int i,vector<vector<string>>&list , int n , string s)
    {
        if(i>n-1)
        {
            vector<string>  out;
            out.push_back(s);
            v.push_back(out);
            return;
        }
        for(auto val : list[i])
        {
            if(i==n-1)
            find(i+1,list,n,s+val);
            else
            find(i+1,list,n,s+val+" ");
        }
    }
    vector<vector<string>> sentences(vector<vector<string>>&list){
        int n = list.size();
        find(0,list,n,"");
        return v;
    }
};


//{ Driver Code Starts.
int main()
{
	int t = 1;
	//cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<vector<string>>list(m, vector<string>(n));
	    for(int i = 0 ; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cin >> list[i][j];
	        }
	    }
	    Solution ob;
	    vector<vector<string>>ans = ob.sentences(list);
	    for(auto it : ans){
	        for(auto it1 : it){
	            cout << it1 << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}

// } Driver Code Ends