//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
     int h=pow(2,r);
        int j=n/h;
        int g1=n%h;
         string g="";
         g=g+s[j];
         while(r>0)
         {
             string h="";
             for(int i=0;i<g.length();i++)
             {
                 if(g[i]=='1')
                 h+="10";
                 else
                 h+="01";
             }
             g=h;
             r--;
         }
      
         return g[g1];
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends