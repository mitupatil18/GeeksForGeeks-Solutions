//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[]){
        int arr1[W+1], arr2[W+1];
        int* a = arr1;
        int* b = arr2;
        for(int &i:arr2)
            i = 0;
        for( int i=0;i<N;i++){
            int lim = min(W+1,wt[i]);
            for(int j=0;j<lim;j++)
                a[j] = b[j];
            for(int j=lim;j<=W;j++)
                a[j] = max ( val[i]+ a[j-wt[i]], b[j]);
            swap(a,b);
        }
        return b[W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends