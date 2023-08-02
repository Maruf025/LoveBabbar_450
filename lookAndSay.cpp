//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        if(n==1) return "1";
        int m=n-1;
        string ans="1";
        
        while(m--){
            string curr=ans;
            int k=0;
            ans="";
            
            while(k<curr.length()-1){
                int count=1;
                
                while(curr[k]==curr[k+1] && k<(curr.length()-1)){
                    count++;
                    k++;
                }
                
                string countt= to_string(count);
                ans=ans+countt+curr[k];
                k++;
            }
            
            if(curr[curr.length()-1] != curr[curr.length()-2]) {
                ans=ans+'1'+curr[curr.length()-1];
            }
        }
        
        return ans;
        
        
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
