//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int count(int n)
    {
        int cnt = 0 ;
        while(n)
        {
            if(n%2)cnt++ ;
            n /= 2 ;
        }
        return cnt ;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        map<int,vector<int> ,greater<int>> ans ;
        for(int i = 0 ; i<n ; i++)
        {
            int x = count(arr[i]);
            ans[x].push_back(arr[i]);
        }
        int i = 0 ;
        for(auto it = ans.begin() ; it!=ans.end(); it++)
        {
            for(int j = 0 ; j<it->second.size() ; j++)
            {
                arr[i] = it->second[j];
                i++ ;
            }
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