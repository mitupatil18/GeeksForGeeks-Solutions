//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string strs[], int N)
    {
        int i , j ;
        string s = "" ;
        for(i = 0 ; i<strs[0].length();i++)
        {
            for(j = 1 ; j<N;j++)
            {
                if(i==strs[j].length() || strs[0][i]!=strs[j][i])
                    break ;
            }
            if(j!=N)
                break;
            else
               s = s+strs[j-1][i]; 
        }
        if(s.length()!=0)
        return s ;
        else return "-1";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends