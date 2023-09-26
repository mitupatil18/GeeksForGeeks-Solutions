//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        vector<int> v(26,0) ;
        for(int i = 0 ; i<s.size() ; i++)
        {
            v[s[i]-'a']++ ;
        }
        vector<int> a ;
        for(int i = 0 ; i<26 ; i++)
        {
            if(v[i]!=0)
            a.push_back(v[i]) ;
        }
        while(k>0)
        {
            sort(a.begin(),a.end());
            int i = a.size()-1 ;
            while(a[i]>=a[i-1] && k>0)
            {
                a[i]-- ;
                k-- ;
            }
        }
        int sum = 0 ;
        for(int i = 0 ; i<a.size() ; i++)
        sum += (a[i]*a[i]) ;
        return sum ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends