//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		    vector<string> v ;
	    void find(string & s , int i , const string& temp)
	    {
	        
	        if(i>=s.size())
	        {
	            if(temp.size()>0)
	            v.push_back(temp);
	            return ;
	        }
	        find(s,i+1, temp+s[i]);
	        find(s,i+1, temp);
	    }
		vector<string> AllPossibleStrings(string s){
		    string temp = "" ;
		    find(s,0, temp);
		    sort(v.begin(),v.end());
		    return v ;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends