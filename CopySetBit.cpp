//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    
    int setSetBit(int x, int y, int l, int r){
        
        y>>=(l-1);
        int pos=l-1;
        
        while(r>=l){
            
            if(y%2 & 1){
                x=(x | (1<<pos));
            }
            
            pos++;
            y>>=1;
            l++;
        }
        
        return x;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
