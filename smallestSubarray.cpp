//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        //0.27 seconds
        // int ans=INT_MAX;
        // int localSum;
        // int count;
        // int j;
        
        // for(int i=0;i<n;i++){
            
        //     count=0;
        //     localSum=0;
        //     j=i;
            
        //     while(localSum<=x && j<n){
        //         localSum+=arr[j];
        //         count++;
        //         j++;
        //     }
            
        //     if(localSum>x) ans=min(ans,count);
        // }
        
        // return ans;
        
        
        //0.23 seconds
        int sum=0;
        int min_len=n+1;
        
        int start=0,end=0;
        
        while(end<n){
            while(sum<=x && end<n){
                sum+=arr[end];
                end++;
            }
            
            while(sum>x && start<n){
                if(end-start<min_len)
                    min_len=end-start;
                    
                sum-=arr[start];
                start++;
            }
        }
        
        return min_len;
        
    
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends
