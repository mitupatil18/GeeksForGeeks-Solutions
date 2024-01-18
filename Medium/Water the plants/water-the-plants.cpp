//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int min_sprinklers(int g[], int n)
    {
       vector<pair<int,int>> v ;
       for(int i = 0 ; i<n ;i++)
       {
           if(g[i]==-1)
           continue;
           int mn = i-g[i];
           int mx = i+g[i];
           if(mn<0)
           mn = 0 ;
           if(mx>n)
           mx = n ;
           v.push_back({max(0,mn),min(n-1,mx)});
       }
       sort(v.begin(),v.end());
       int s = 0 , i = 0 , ans = 0 ;
       while(s<n)
       {
           int maxr = INT_MIN ;
           while(i<v.size())
           {
               if(v[i].first>s)
               break;
               maxr = max(maxr,v[i].second);
               i++ ;
           }
           if(maxr<s)
           return -1 ;
           ans++ ;
           s = maxr+1 ;
       }
       return ans ;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends