//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int>  v;
        int t = 0 , b = m-1, l = 0, r = n-1, d = 0 ;
        while(t<=b && l<=r)
        {
            if(d==0)
            {
                for(int i = l ;i<=r;i++)
                v.push_back(mat[t][i]);
                t++;
                d = 1;
            }
            else if(d==1)
            {
                for(int i = t ;i<=b;i++)
                v.push_back(mat[i][r]);
                r--;
                d = 2;
            }
            else if(d==2)
            {
                for(int i = r ;i>=l;i--)
                v.push_back(mat[b][i]);
                b--;
                d = 3;
            }
            else if(d==3)
            {
                for(int i = b ;i>=t;i--)
                v.push_back(mat[i][l]);
                l++;
                d = 0 ;
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
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends