//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    
    int n=price.size();
    int profits[n];
    int maxP=0;
    int minPrice=price[0];
    int maxPrice=price[n-1];
    
    for(int i=0;i<n;i++){
        minPrice=min(minPrice, price[i]);
        maxP=max(maxP, price[i]-minPrice);
        profits[i]=maxP;
    }
    
    maxP=0;
    
    for(int i=n-1;i>=0;i--){
        maxPrice=max(maxPrice, price[i]);
        maxP=max(maxP,maxPrice-price[i]);
        profits[i]+=maxP;
    }
    
    return *max_element(profits, profits+n);
    
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends
