//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isValid(int arr[],int N,int M,int mid){
        int sum =0,stu=1;
        for(int i=0;i<N;i++){
            sum += arr[i];
            if(sum>mid){
                stu++;
                sum = arr[i];
            }
            if(stu>M)
                return false;
        }
        return true;
    }
    int findPages(int A[], int N, int M){   
        if(N<M)
            return -1;
        int s=0,e=0,res=-1;
        for(int i=0;i<N;i++){
            s = max(s,A[i]);
            e += A[i];
        }
        while(s<=e){
            int mid = s + (e-s)/2;
            if(isValid(A,N,M,mid)==true){
                res = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends