//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i = 0 , l , r, mid;
            vector <int> v ;
            for( ; i<n1 ; i++)
            {
                int t = A[i];
                l = 0 ;
                r = n2-1 ;
                while(l<=r)
                {
                    mid = (l+r)/2 ;
                    if(B[mid]==t)
                    break;
                    if(B[mid]<t)
                    l = mid+1 ;
                    else
                    r = mid-1 ;
                }
                if(l<=r)
                {
                    l = 0 ;
                    r = n3-1 ;
                    while(l<=r)
                    {
                        mid = (l+r)/2 ;
                        if(C[mid]==t)
                        break;
                        if(C[mid]<t)
                        l = mid+1 ;
                        else
                        r = mid-1 ;
                    }
                    if(l<=r)
                    {
                        if(find(v.begin(),v.end(), t)==v.end())
                        v.push_back(t);
                    }
                }
            }
            return v ;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends