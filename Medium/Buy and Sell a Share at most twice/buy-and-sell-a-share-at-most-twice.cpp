//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&prices){
    int n = prices.size();
    int firstBuy = INT_MIN, firstSell = 0;
    int secondBuy = INT_MIN, secondSell = 0;
    for(int i = 0; i < n; i++)
    {
    	firstBuy = max(firstBuy, - prices[i]);
    	firstSell = max(firstSell, firstBuy + prices[i]);
    	secondBuy = max(secondBuy, firstSell - prices[i]);
    	secondSell = max(secondSell, secondBuy + prices[i]);
    }
    return secondSell;
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends