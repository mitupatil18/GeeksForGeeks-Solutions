//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        string str = A ;
        int cnt = 1 ;
        while(A.size()<B.size())
        {
            A += str ;
            cnt++ ;
        }
        if(A.find(B)!=-1)
        return cnt ;
        else
        {
            A += str ;
            cnt++ ;
            if(A.find(B)!=-1)
            return cnt ;
            else
            return -1 ;
        }
    }
  
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}

// } Driver Code Ends