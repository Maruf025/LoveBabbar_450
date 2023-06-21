//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

//     int nextPoss(int arr[], int i,int n){
//         int m=i;
//         while(m<n){
//             if(arr[m]>=0) return m;
//             else m++;
//         }
        
//         return -1;
//     }
    
//     int nextNegg(int arr[], int i, int n){
//         int m=i;
//         while(m<n){
//             if(arr[m]<0) return m;
//             else m++;
//         }
        
//         return -1;
//     }

	void rearrange(int arr[], int n) {
	    
// 	   ----------------------------------------------------------------------
// 	   WITH USING EXTRA SPACE and TC O(N)
	   vector<int> pos,neg;
	    
	   for(int i=0;i<n;i++){
	       if(arr[i]>=0){
	           pos.push_back(arr[i]);
	       }else{
	           neg.push_back(arr[i]);
	       }
	   }
	    
	   int i=0, posIdx=0, negIdx=0;
	   bool posNeed=true;
	    
	   while(i<n && posIdx<pos.size() && negIdx<neg.size()){
	       if(posNeed==1){
	           arr[i]=pos[posIdx];
	           posIdx++;
	           posNeed=0;
	       }else{
	           arr[i]=neg[negIdx];
	           negIdx++;
	           posNeed=1;
	       }
	       i++;
	   }
	    
	   while(posIdx<pos.size()){
	       arr[i]=pos[posIdx];
	       posIdx++;
	       i++;
	   }
	    
	   while(negIdx<neg.size()){
	       arr[i]=neg[negIdx];
	       negIdx++;
	       i++;
	   }
	   
	   
	   //--------------------------------------------------------------------
	   //WITHOUT USING EXTRA SPACE and TC O(N*N) --------------------------------(wrong)
	   //void rearrange(int arr[], int n) {
    
//        int nextPos=nextPoss(arr, 0,n), nextNeg=nextNegg(arr,0,n);
//        bool posNeed=1;
//        int i=0;
       
       
//        for(;i<n;i++){
//            if(posNeed==1){
//                 if(i==nextPos){
//                     nextPos=nextPoss(arr, nextPos+1,n);
//                     posNeed=0;
//                     continue;
//                 }
//                 if(nextPos==(-1)) break;
// 	            swap(arr[i], arr[nextPos]);
// 	            if(i==nextNeg){
// 	                nextNeg=nextPos;
// 	            }
// 	            nextPos=nextPoss(arr, nextPos+1,n);
// 	            posNeed=0;
// 	        }else{
// 	            if(i==nextNeg){
//                     nextNeg=nextNegg(arr, nextNeg+1,n);
//                     posNeed=1;
//                     continue;
//                 }
// 	            if(nextNeg==(-1)) break;
// 	            swap(arr[i],arr[nextNeg]);
// 	            if(i==nextPos){
// 	                nextPos=nextNeg;
// 	            }
// 	            nextNeg=nextNegg(arr, nextNeg+1,n);
// 	            posNeed=1;
// 	        }
//         }
       
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
