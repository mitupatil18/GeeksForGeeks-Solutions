//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int>s ;
        vector<int> v;
        while(!q.empty())
        {
            if(k<=0)
            {
                v.push_back(q.front());
            }
            else
            {
                s.push(q.front());
                k--;
            }
            q.pop();
        }
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        for(int i = 0 ; i<v.size();i++)
        {
            q.push(v[i]);
        }
        return q ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends