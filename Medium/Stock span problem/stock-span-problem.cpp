//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    stack<pair<int,int>> stk;
    //Function to calculate the span of stockâ€™s price for all n days.
    int find(int price)
    {
        int cnt = 1;
        while(!stk.empty() && stk.top().first<=price)
        {
            cnt+= stk.top().second;
            stk.pop();
        }
        stk.push({price,cnt});
        return stk.top().second;
    }
    vector <int> calculateSpan(int price[], int n)
    {
       vector <int> v;
       for(int i = 0 ; i<n ;i++)
       {
           v.push_back(find(price[i]));
       }
       return v;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends