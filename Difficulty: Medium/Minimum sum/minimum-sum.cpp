//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        sort(arr,arr+n);
        string s1 , s2;
        string ans;
        for(int i = 0 ; i<n;i++)
        {
            char ch = arr[i]+48;
            if(i%2)
            s1.push_back(ch);
            else
            s2.push_back(ch);
        }
        int carry = 0 , i = s1.size()-1 , j = s2.size()-1;
        while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? s1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? s2[j--] - '0' : 0;
        
        int sum = digit1 + digit2 + carry;
        ans.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
        reverse(ans.begin(),ans.end());
         i = 0 ;
        string res;
        while(i<ans.size())
        {
            if(ans[i]!='0')
            break;
            i++;
        }
        while(i<ans.size())
        {
            res.push_back(ans[i]);
            i++;
        }
        return res.size()==0?"0" : res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends