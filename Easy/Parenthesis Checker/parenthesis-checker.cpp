//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<int> s;
        int i = 0 ;
        while(i<x.size())
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            s.push(x[i]);
            else if(!s.empty())
            {
                if(x[i]=='}' && s.top()=='{' && !s.empty())
                s.pop();
                else if(x[i]==')' && s.top()=='(' && !s.empty())
                s.pop();
                else if(x[i]==']' && s.top()=='[' && !s.empty())
                s.pop();
                else
                return false;
            }
            else
            return false;
            i++ ;
        }
        return s.empty()?true:false;
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