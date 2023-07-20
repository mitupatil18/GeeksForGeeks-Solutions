//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n = S.size();
       int i = 0 ;
       char ans = '$' ;
       map<char,int> m ;
       while(i<n)
       {
           m[S[i]]++;
           i++;
       }
       i = 0 ;
       while(i<n)
       {
           if(m[S[i]]==1)
           {
               ans = S[i] ;
               break ;
           }
           i++ ;
       }
       return ans ;
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends