//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for(int i = 0 ; i<n ;i++)
        {
            string s = to_string(a[i]);
            int x = 0 , y = s.size()-1;
            while(x<y)
            {
                if(s[x]!=s[y])
                break;
                x++ ;
                y-- ;
            }
            if(x>=y)
            continue;
            else
            return 0 ;
        }
        return 1 ;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends