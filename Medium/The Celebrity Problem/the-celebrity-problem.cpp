//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        vector<int> v(n,0);
        for(int i = 0 ; i<m.size() ;i++)
        {
            for(int j = 0 ; j<m[i].size();j++)
            {
                if(m[i][j]==1)
                v[j]++;
            }
        }
        for(int i = 0 ; i<n;i++)
        {
            if(v[i]==n-1)
            {
                int j ;
                for(j = 0 ; j<m[i].size() ;j++)
                {
                    if(m[i][j]==1)
                    break;
                }
                if(j==m[i].size())
                return i ;
            }
        }
        return -1 ;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends