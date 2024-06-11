//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    vector<int> adj[N];
	    for(auto it : prerequisites)
	    adj[it.first].push_back(it.second);
	    vector<int> ind(N,0);
	    for(int i = 0 ; i<N ; i++)
	    {
	        for(auto x : adj[i])
	        ind[x]++ ;
	    }
	    queue<int> q;
	    for(int i = 0 ; i<N ; i++)
	    {
	        if(ind[i]==0)
	        q.push(i);
	    }
	    vector<int> topo;
	    while(!q.empty())
	    {
	        int x = q.front();
	        q.pop();
	        topo.push_back(x);
	        for(auto i : adj[x])
	        {
	            ind[i]--;
	            if(ind[i]==0)
	            q.push(i);
	        }
	    }
	    return topo.size()==N ? 1 :0;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends