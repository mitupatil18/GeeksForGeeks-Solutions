//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<char> st;
        int i  = 0 ;
        for(i = 0 ; i<s.length() ; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
            else
            {
                if(!st.empty() && s[i]==')' && st.top()=='(')
                st.pop();
                else if(!st.empty() && s[i]=='}' && st.top()=='{')
                st.pop();
                else if(!st.empty() && s[i]==']' && st.top()=='[')
                st.pop();
                else
                break;
            }
        }
        return st.empty() && i==s.length();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends