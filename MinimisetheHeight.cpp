//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        /*idea is that we sort the array, now initial diff in last-first
        so to minimise diff, we add k to first and subt k from last
        but we also know ki minimum diff will be from consecutive pair so we check that 
        possibility if we can get a consecutive pair diff and keep updating the diff
        at the end we return the minimum diff*/
        
        sort(arr, arr+n);
        
        int diff=arr[n-1]-arr[0];
        int tempmin=arr[0], tempmax=arr[n-1];
        
        for(int i=1;i<n;i++){
            if (arr[i] - k < 0) continue;
            
            tempmin=min(arr[0]+k, arr[i]-k);
            tempmax=max(arr[n-1]-k, arr[i-1]+k);
            
            diff=min(diff, tempmax-tempmin);
        }
        
        return diff;
        
    
}
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
