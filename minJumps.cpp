//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int m,jumps=0;
        
        for(int i=0;i<n;i++){
            arr[i]=arr[i]+i;
        }
        
        int *maxx;
        int index;
        
        for(int i=0;i<n;i++){
            m=arr[i]-i;
            if(m==0) return -1;
            if(i+m>=n-1) return ++jumps;
            maxx=max_element(arr+i+1,arr+i+1+m);
            index=maxx-arr;
            i=index-1;
            jumps++;
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
