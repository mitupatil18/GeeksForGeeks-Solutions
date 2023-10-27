//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool ispalindrome(string &s,int start,int end)
   {
     while(start<=end)
     {
       if(s[end]!=s[start])
       return false;
       start++;end--;
     }
     return true;
   }
    string longestPalindrome(string s) {

        string ans="";
        for(int i=0;i<s.size();i++)
        {
          for(int j=i;j<s.size();j++)
          {
            if(ispalindrome(s,i,j))
            {
              string t=s.substr(i,j-i+1);
              ans=t.size()>ans.size()?t:ans;
            }
          }
        }
        return ans;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends