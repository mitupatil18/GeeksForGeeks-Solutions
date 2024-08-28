//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> v;
        map<int,vector<int>,greater<int>> m;
        int cnt = 1, i = 0;
        for(i = 1 ; i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            cnt++;
            else
            {
                m[cnt].push_back(arr[i-1]);
                cnt = 1;
            }
        }
        m[cnt].push_back(arr[i-1]);
        for(auto x : m)
        {
            auto y = x.second;
            for(int i = 0 ; i<y.size();i++)
            {
                int z = x.first;
                while(z>0)
                {
                    v.push_back(y[i]);
                    z--;
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
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends