//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        if(N==0) return 0;
        if(N==1) return 1;
        
        int ans=0;
        
        set<int> s;
        
        for(int i=0;i<N;i++){
            s.insert(arr[i]);
        }
        
        int temp=0;
        auto itt=next(s.begin(),1);
        auto it=s.begin();
        
        for(;itt!=s.end();itt++){
            if((*(itt)-*(it))==1){
                temp++;
            }else{
                ans=max(ans,temp+1);
                temp=0;
            }
            
            it++;
        }
        
        ans=max(ans,temp+1);
        
        return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
