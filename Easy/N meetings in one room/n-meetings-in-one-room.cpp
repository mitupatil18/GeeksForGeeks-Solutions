//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> ans;
        int i ;
        for(i = 0 ; i<n ; i++)
        {
           pair<int,int> p = make_pair(start[i] , end[i]);
           ans.push_back(p);
        }
        sort(ans.begin(),ans.end());
        int an=0;
        int last=-1;
        for(int i=0;i<n;i++) {
            if(ans[i].first>last) {
                last=ans[i].second;
                an++;
            }
            else if(ans[i].second<last) {
                last=ans[i].second;
            }
        }
        return an;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends