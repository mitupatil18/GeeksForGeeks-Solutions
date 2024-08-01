//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string s)
{
    string ans = "";
    map<string, char> m;
    m["ABC"] = '2';
    m["DEF"] = '3';
    m["GHI"] = '4';
    m["JKL"] = '5';
    m["MNO"] = '6';
    m["PQRS"] = '7';
    m["TUV"] = '8';
    m["WXYZ"] = '9';
    m[" "] = '0' ;
    for(int i = 0 ; i<s.size();i++)
    {
        for(auto & x : m)
        {
            string z = x.first;
            if(z.find(s[i])!=string::npos)
            {
                int ind = z.find(s[i]);
                while(ind+1>0)
                {
                    ans += (x.second);
                    ind--;
                }
            }
        }
    }
    return ans;
}