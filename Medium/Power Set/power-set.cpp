//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	     void find(string t,  const string s ,int index , vector<string>& ans)
	     {
	         if(index==s.length())
	         {
	             if(!t.empty()) ans.push_back(t);
	             return ;
	         }
	         find(t+s[index] ,s, index+1, ans);
	         find(t,s, index+1, ans);
	     }
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans ;
		    find("" ,s , 0, ans);
		    sort(ans.begin(), ans.end());
		    return ans ;
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