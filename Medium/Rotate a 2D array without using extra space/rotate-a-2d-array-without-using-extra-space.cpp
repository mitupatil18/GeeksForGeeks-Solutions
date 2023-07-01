//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& m, int n) {
	    int i , j , k ;
        for(i = 0; i<m.size();i++)
        {
            for(j = 0 ; j<m[0].size(); j++)
            {
                if(i<j)
                {
                    swap(m[i][j],m[j][i]);
                }
            }
        }
        i = 0 , j = m.size()-1,k = 0 ;
        for( ; i<j;i++,j--)
        {
            for(k = 0 ; k<m.size();k++)
            {
                swap(m[i][k], m[j][k]);
            }
        } 
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends