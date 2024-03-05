//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int n, string s) {
        map<char,int> m;
        int c = n , ans = 0 ;
        for(int i = 0 ; i<s.size();i++)
        {
            if(m[s[i]]==1)
            {
                c++;
                m[s[i]] = 0 ;
            }
            else if(m[s[i]]==-1)
            ans++;
            else if(c>0)
            {
                c--;
                m[s[i]] = 1 ;
                
            }
            else
            {
                m[s[i]] = -1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        cin.ignore();
        string s; 
        getline(cin,s);
        
        Solution obj;
        int res = obj.solve(n, s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends