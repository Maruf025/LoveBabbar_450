//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> arr;
        vector<vector<int>> ans(N,vector<int>(N));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                arr.push_back(Mat[i][j]);
            }
        }
        
        sort(arr.begin(), arr.end());
        int p=0;
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                ans[i][j]=arr[p];
                p++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends
