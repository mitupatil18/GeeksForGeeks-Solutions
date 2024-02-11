//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        set<int> s;
        vector<int> v(n,0);
        s.insert(0);
        for(int i = 1 ; i<n ;i++)
        {
            int x = v[i-1]-i ;
            if(s.find(x)==s.end() && x>0)
            {
                s.insert(x);
                v[i] = x ;
            }
            else
            {
                x = v[i-1]+i ;
                s.insert(x);
                v[i] = x ;
            }
        }
        return v ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends