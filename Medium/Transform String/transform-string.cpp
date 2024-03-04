//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        if(A.size()!=B.size())
        return -1;
        int i = A.size()-1 , j= A.size()-1 , cnt = 0 ;
        map<char,int> m1 ,m2 ;
        for(int i = 0 ; i<A.size() ;i++)
        {
            m1[A[i]]++;
            m2[B[i]]++;
        }
        for(int i = 0 ; i<A.size() ;i++)
        {
            if(m1[A[i]]!=m2[A[i]])
            return -1;
        }
        while(i>=0 && j>=0)
        {
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            else
            {
                cnt++;
                i--;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends