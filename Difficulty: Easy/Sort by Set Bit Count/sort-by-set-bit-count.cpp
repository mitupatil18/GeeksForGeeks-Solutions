//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int count(int n)
    {
        int ans = 0 ;
        while(n>0)
        {
            if(n%2==1)
            ans++;
            n /= 2;
        }
        return ans;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        map<int,vector<int>, greater<int>> m;
        for(int i = 0 ; i<n;i++)
        {
            int x = count(arr[i]);
            m[x].push_back(arr[i]);
        }
        int j = 0;
        for(auto x : m)
        {
            vector<int> v = x.second;
            for(int i = 0 ; i<v.size();i++)
            arr[j++] = v[i];
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends