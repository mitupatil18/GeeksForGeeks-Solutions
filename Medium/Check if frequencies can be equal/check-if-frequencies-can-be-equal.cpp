//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	     int freq[26];
        memset(freq,0,sizeof(freq));
        
        int maxi=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]-97]++;
            maxi=max(freq[s[i]-97],maxi);
            
        }
        int c_1=0;
        int maxi_=0;
        for(int i=0;i<26;i++){
            if(maxi==freq[i])
                maxi_++;
        }
        
        
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                int t=abs(maxi-freq[i]);
                if(t>1)
                    return(0);
                if(maxi_>1 && t==1 && c_1==0)
                    c_1++;
                else if(maxi_>1 && c_1)
                    return(0);
            }
            
        }
    return(1);
	 }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends