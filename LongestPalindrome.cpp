//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int n=S.length();
        int start=0;
        int len=1;
        int low, hi;
        
        for(int i=0;i<n;i++){
            
            //checking even longest palindrome
            low=i-1;
            hi=i;
            
            while(low>=0 && hi<n && S[low]==S[hi]){
                if(hi-low+1>len){
                    start=low;
                    len=hi-low+1;
                }
                
                low--;
                hi++;
            }
            
            //checking for odd longest palindrome
            low=i-1;
            hi=i+1;
            
            while(low>=0 && hi<n && S[low]==S[hi]){
                if(hi-low+1>len){
                    start=low;
                    len=hi-low+1;
                }
                
                low--;
                hi++;
            }
        }
        
        string ans=S.substr(start, len);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
