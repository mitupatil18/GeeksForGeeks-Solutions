//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& m, int n) 
    { 
        vector<vector<int>> vis(n, vector<int>(n, 0));
        n = m.size()-1;
        for(int i = 0 ; i<m.size() ;i++)
        {
            for(int j = 0 ; j<m[i].size(); j++)
            {
                if(!vis[i][j])
                {
                    swap(m[i][j],m[j][i]);
                    vis[i][j] = vis[j][i] = 1;
                }
            }
        }
        n++;
        for(int i = 0 ; i<n/2 ;i++)
        {
            swap(m[i],m[n-i-1]);
        }
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends