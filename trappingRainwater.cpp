//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int left_max[n];
        int right_max[n];
        int maxx=INT_MIN;
        
        for(int i=0;i<n;i++){
            maxx=max(maxx, arr[i]);
            left_max[i]=maxx;
        }
        
        maxx=INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            maxx=max(maxx, arr[i]);
            right_max[i]=maxx;
        }
        
        long long ans=0;
        int level;
        
        for(int i=1;i<n-1;i++){
            level=min(left_max[i], right_max[i]);
            if(level>arr[i]){
                ans+=level-arr[i];
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
