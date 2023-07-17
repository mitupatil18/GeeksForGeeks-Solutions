//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int> m ;
		    int i ;
		    queue<char> q ;
		    string s = "" ;
		    for(i = 0 ; i<A.size();i++)
		    {
		        m[A[i]]++;
		        if(m[A[i]]==1)
		        q.push(A[i]);
		        while(!q.empty() && m[q.front()]>1){
                    q.pop();
                }
                 if(q.empty())
                    s+='#';
                else
                    s+=q.front();
		    }
		    return s ;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends