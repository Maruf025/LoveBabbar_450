//{ Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}

// } Driver Code Ends



int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int startval=mat[0][0];
    int endval=mat[n-1][n-1];
    
    while(endval>=startval){
        int midval=startval+(endval-startval)/2;
        
        int ans=0;
        for(int r=0;r<n;r++){
            
            int lo=0; int hi=n-1; //column
            
            while(hi>=lo){
                int m=lo+(hi-lo)/2;
            
                if(mat[r][m]<=midval) lo=m+1;
                else hi=m-1;
            }
            
            ans+=lo;
        }
        if(ans<k) startval=midval+1;
        else endval=midval-1;
    }
    
    return startval;
    
}
