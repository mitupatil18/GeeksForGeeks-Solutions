//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    std::vector<int> antiDiagonalPattern(std::vector<std::vector<int>> m) 
    {
        std::vector<int> v;
        int n = m.size();
        std::vector<std::vector<int>> a(2 * n - 1, std::vector<int>());
    
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                int x = i + j;
                a[x].push_back(m[i][j]);
            }
        }
    
        for (int i = 0; i < a.size(); i++) 
        {
            if (!a[i].empty()) 
            {
                reverse(a[i].begin(),a[i].end());
                for (int j = a[i].size() - 1; j >= 0; j--) 
                {
                    v.push_back(a[i][j]);
                }
            }
        }
        return v;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends