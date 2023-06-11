//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int temp;
        int count;
        int i;
        
        
        for(i=N-1;i>0;i--){
            if(arr[i]>arr[i-1]){
                for(int j=N-1;j>=i;j--){
                    if(arr[j]>arr[i-1]){
                        temp=arr[j];
                        arr[j]=arr[i-1];
                        arr[i-1]=temp;
                        break;
                    } 
                }
                break;
            }
            
            count++;
        }
        
        for(int k=0;k<=(N-i)/2;k++){
            temp=arr[i];
            arr[i]=arr[N-1-k];
            arr[N-1-k]=temp;
            i++;
        }
        
        if(count==(N-1)){
            for(int j=0;j<(N-1)/2;j++){
                temp=arr[j];
                arr[j]=arr[N-j-1];
                arr[N-j-1]=temp;
            }
        }
        
        
        
        
        
        
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
