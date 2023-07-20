//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &asteroids) {
        // code here
        stack<int> stk;
        
        for(int i = 0; i < n; i++){
            if(stk.empty() || asteroids[i] > 0){
                stk.push(asteroids[i]);
            }else{
                while(!stk.empty() && stk.top() > 0 && stk.top() < abs(asteroids[i])){
                    stk.pop();
                }

                if(!stk.empty() && stk.top() == abs(asteroids[i])){
                    stk.pop();
                }else{
                    if(stk.empty() || stk.top() < 0){
                        stk.push(asteroids[i]);
                    }
                } 
            }
        }
        vector<int> ans(stk.size(), 0);
        int size = stk.size();
        while(!stk.empty()){
            ans[--size] = stk.top();
            stk.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends