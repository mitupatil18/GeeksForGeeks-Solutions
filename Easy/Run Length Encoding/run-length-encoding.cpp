//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string s)
{     
  string z ;
  int cnt = 1 , i;
  for( i = 0 ; i<s.size()-1 ; i++)
  {
      if(s[i]==s[i+1])
      cnt++ ;
      else
      {
        
          z.push_back(s[i]);
          string x = to_string(cnt);
          z += x ;
          cnt = 1 ;
      }
  }
  z.push_back(s[i]);
  string x = to_string(cnt);
  z += x ;
  return z ;
}     
 
