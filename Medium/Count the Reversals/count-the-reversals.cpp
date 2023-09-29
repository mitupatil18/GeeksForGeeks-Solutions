//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    if(s.size()%2==1)
    return -1 ;
    stack<char> st ;
    int c = 0 ;
    for(auto e:s)
    {
        if(e=='{')
        st.push(e);
        else
        {
            if(st.empty())
            {
                c++ ;
                st.push('{');
            }
            else
            {
                st.pop();
            }
        }
    }
    return c+(st.size()/2) ;
}