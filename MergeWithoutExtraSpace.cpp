//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            //TC=O(n*m)
            // long long *p1=&arr1[0],*p2=&arr2[0];
            
            // long long temp;
            
            // while(n--){
            //     if(*p1<=*p2){
            //         p1++;
            //     }
                
            //     else{
            //         temp=*p1;
            //         *p1=*p2;
            //         *p2=temp;
            //         p1++;
            //         p2=min_element(arr2,arr2+2);
            //     }
            // }
            
            // sort(arr2,arr2+m);
            
            //GAP METHOD (Shell Sort)
            
            int len=m+n;
            int gap=(len/2)+(len%2);
            int temp;
            
            while(gap>0){
                
                int left=0;
                int right=left+gap;
                
                while(right<len){
                    //left in arr1, right in arr2
                    if(left<n && right>=n){
                        if(arr1[left]>arr2[right-n]){
                            swap(arr1[left],arr2[right-n]);
                            // temp=arr1[left];
                            // arr1[left]=arr2[right-n];
                            // arr2[right-n]=temp;
                        }
                    }
                    
                    //both in arr2
                    else if(left>=n){
                        if(arr1[left-n]>arr2[right-n]){
                            swap(arr1[left-n],arr2[right-n]);
                            // temp=arr1[left-n];
                            // arr1[left-n]=arr2[right-n];
                            // arr2[right-n]=temp;
                        }
                    }
                    
                    //both in arr1
                    else{
                        if(arr1[left]>arr2[right]){
                            swap(arr1[left],arr2[right]);
                            // temp=arr1[left];
                            // arr1[left]=arr2[right];
                            // arr2[right]=temp;
                        }
                    }
                    
                    left++; right++;
                }
                
                if(gap==1) break;
                    
                gap=(gap/2)+(gap%2) ;
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
