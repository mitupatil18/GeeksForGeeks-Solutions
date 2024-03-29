//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int> s ;
        vector<int> v(n,0);
        int i = n-1;
        while(i>=0)
        {
            while(!s.empty() && s.top()>=arr[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                v[i] = s.top();
               
            }
            else
            v[i] = -1;
            s.push(arr[i]);
            i--;
        }
        return v ;
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends