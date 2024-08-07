//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string checkFibonacci(int N){
        int ans = 0 ;
        int a = 0 , b = 1;
        while(a<N && b<N)
        {
            int x= a+b;
            a = b;
            b = x;
            
        }
        return a==N || b==N ? "Yes": "No";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends