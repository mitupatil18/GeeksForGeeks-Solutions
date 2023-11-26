//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N){
        if(N<=0)
        return {N} ;
        vector<int> v ;
        stack<int> z  ;
        int x = N ;
        do {
            v.push_back(x);
            z.push(x);
            if(x<0)
            x += 5 ;
            else
            x -= 5 ;
        }
        while(x>0);
        v.push_back(x);
        while(!z.empty())
        {
            v.push_back(z.top());
            z.pop();
        }
        return v ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends