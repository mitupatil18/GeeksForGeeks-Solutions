//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        set<char> s ;
        int i = 0 ;
        while(i<a.size())
        {
            s.insert(a[i]);
            i++ ;
        }
        for(i = 0 ; i<a.size();i++)
        {
            s.erase(a[i]);
            if(s.empty()) break;
            char ch = *s.begin();
            if(ch<a[i])
            {
                int ch2 = a[i];
                for(int j = 0  ; j<a.size();j++)
                {
                    if(a[j]==ch) a[j] = ch2 ;
                    else if(a[j]==ch2) a[j] = ch ;
                }
                break;
            }
        }
        return a ;
    }
    
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}

// } Driver Code Ends