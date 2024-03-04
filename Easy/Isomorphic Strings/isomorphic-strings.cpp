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
    bool areIsomorphic(string str1, string str2)
    {
       vector<char> v(26,'\0');
       set<char> s;
       if(str1.size()!=str2.size())
       return 0;
       for(int i = 0 ; i<str1.size();i++)
       {
           if(v[str1[i]-'a']=='\0')
           {
               v[str1[i]-'a'] = str2[i];
               if(s.find(str2[i])==s.end())
               s.insert(str2[i]);
               else
               return 0;
           }
           else
           {
               if(v[str1[i]-'a']!=str2[i])
               return 0;
           }
       }
        return 1;
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