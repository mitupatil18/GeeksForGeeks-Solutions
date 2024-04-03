//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        stack<char> st;
         string res;
        for(int i = 0 ; i<s.size() ;i++)
        {
            if(s[i]=='(')
            st.push('(');
            else if(s[i]=='*'|| s[i]=='/' || s[i]=='+'|| s[i]=='-'|| s[i]=='^'){
                if(st.empty()||st.top()=='(')
                 st.push(s[i]);
                 else {
                     if((st.top()=='+'||st.top()=='-') && (s[i]=='*'|| s[i]=='/'|| s[i]=='^'))
                     st.push(s[i]);
                     else if((st.top()=='*'||st.top()=='/')&&(s[i]=='^'))
                     st.push(s[i]);
                     else if(st.top()=='^')
                          {
                              res+=st.top();
                              st.pop();
                              i--;
                          }else if(st.top()=='*' && (s[i]=='*' || s[i]=='/'||s[i]=='+'||s[i]=='-')){
                              res+=st.top();
                              st.pop();
                              i--;
                          }else if(st.top()=='/' && (s[i]=='/'|| s[i]=='*'||s[i]=='+'|| s[i]=='-')){
                              res+=st.top();
                              st.pop();
                              i--;
                          }else if(st.top()=='+'&& (s[i]=='+'||s[i]=='-')){
                              res+=st.top();
                              st.pop();
                              i--;
                          }else if(st.top()=='-'&& (s[i]=='-'|| s[i]=='+')){
                              res+=st.top();
                              st.pop();
                              i--;
                          }else st.push(s[i]);
                     
                 }
                
            }else if(s[i]==')'){
                while(st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }else res+=s[i];
        }
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends