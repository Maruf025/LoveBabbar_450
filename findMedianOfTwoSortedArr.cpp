//{ Driver Code Starts
//Initial Template for C++
//https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int m=array1.size();
        int n=array2.size();
        
        int size_avg=(m+n)/2;
        
        int p1=0;
        int p2=0;
        int i=0;
        int merged_arr[size_avg+1];
        
        while(i<size_avg+1 && p1<m && p2<n){
            if(array1[p1]<=array2[p2]){
                merged_arr[i]=array1[p1];
                p1++;
            }else{
                merged_arr[i]=array2[p2];
                p2++;
            }
            
            i++;
        }
        
        while(p1<m && i<size_avg+1){
            merged_arr[i++]=array1[p1++];
        }
        
        while(p2<n && i<size_avg+1){
            merged_arr[i++]=array2[p2++];
        }
        
        
        double ans_even=(merged_arr[size_avg]+merged_arr[size_avg-1])/2.0;
        double ans_odd=merged_arr[size_avg];
        
        if((m+n)%2==0) return ans_even;
        else return ans_odd;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
