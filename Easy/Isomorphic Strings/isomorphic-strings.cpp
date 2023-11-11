//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string a, string b)
    {
        if(a.size()!=b.size())
        return 0 ;
        map<char,char> mp1,mp2;
        for(int i=0;i<a.length();i++){
            mp1[a[i]]=b[i];
            mp2[b[i]]=a[i];
        }
        for(int i=0;i<a.length();i++){
            
            if((mp1[a[i]]!=b[i])||(mp2[b[i]]!=a[i]))
            return false;
            
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends