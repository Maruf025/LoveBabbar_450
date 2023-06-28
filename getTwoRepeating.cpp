//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    
    vector<int> singleNumber(vector<int> nums) 
    {
        //didnt work out
        // int maxx=*max_element(nums.begin(), nums.end());
        // string str(maxx, 1);
        // int s=nums.size();
        
        // for(int i=0;i<s;i++){
        //     str[maxx - nums[i]] = str[maxx - nums[i]] ^ (1<<(nums[i]-1));
        // }
        
        // vector<int> ans;
        
        // for(int i=maxx-1; i>=0; i--){
        //     if(str[i]==1) ans.push_back(str.size()-i);
        // }
        
        // return ans;
        
        int n=nums.size();
        
        int xorsum=0;
        for(int i=0;i<n;i++){
            xorsum=xorsum^nums[i];
        }
        
        int pos = xorsum & ~(xorsum - 1); //gives the rightmost bit of xor
        
        int xorsum2=0;
        
        for(int i=0;i<n;i++){
            if(nums[i] & pos){
                xorsum2=xorsum2^nums[i];
            } 
        }
        
        vector<int> final;
        final.push_back(xorsum2);
        final.push_back(xorsum2^xorsum);
        sort(final.begin(), final.end());
        return final;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends
