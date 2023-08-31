//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        vector<int> vec(m,0);
        int mx = INT_MIN;
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                if(M[i][j]==1)
                vec[j] += M[i][j];
                else
                vec[j] = 0 ;
            }
            int ans = 0 ;
            stack<int> st;
            for(int j = 0 ; j<m ; j++)
            {
                while(!st.empty() && vec[st.top()]>=vec[j])
                {
                    int tp = st.top();
                    st.pop();
                    int start ;
                    if(st.empty())
                    start = -1 ;
                    else
                    start = st.top();
                    int cur = vec[tp]*(j-start-1);
                    ans = max(ans,cur);
                }
                st.push(j);
            }
            
            while(!st.empty()){
                int tp = st.top();
                st.pop();
                int start;
                if(st.empty())
                    start = -1;
                else
                    start = st.top();
                int curr_area = vec[tp] *(m-start-1);
                ans = max(ans, curr_area);
            }
            mx = max(mx,ans);
        }
        return mx;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends