//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool checkPrimeNumber(int n) {
        bool isPrime = true;
        if (n == 0 || n == 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        return isPrime;
    }

    int minNumber(int arr[],int N)
    {
        int sum = 0 ; 
        for(int i = 0 ; i<N ; i++)
        sum += arr[i] ;
        for(int i = 0 ; i<1000000 ; i++)
        {
            if(checkPrimeNumber(sum+i))
            return i ;
        }
        return -1 ;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends