//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            
            vector<int> mix;
            
            for(int i=0;i<n1-1;i++){
                if(A[i]==A[i+1]) continue;
                else{
                    mix.push_back(A[i]);
                }
            }
            mix.push_back(A[n1-1]);
            
            for(int i=0;i<n2-1;i++){
                if(B[i]==B[i+1]) continue;
                else{
                    mix.push_back(B[i]);
                }
            }
            mix.push_back(B[n2-1]);
            
            for(int i=0;i<n3-1;i++){
                if(C[i]==C[i+1]) continue;
                else{
                    mix.push_back(C[i]);
                }
            }
            mix.push_back(C[n3-1]);
            
            map<int, int> m;
            
            for(int i=0;i<mix.size();i++){
                m[mix[i]]++;
            }
            
            for(auto i=m.begin();i!=m.end();i++){
                if(i->second==3) ans.push_back(i->first);
            }
            
            
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends
