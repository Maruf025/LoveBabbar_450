//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        
        int a=0, b=r-1;     //row
        int f=0, g=c-1;     //column

        while(a<=b && f<=g){
            
            //iterating first row
            for(int i=f;i<=g;i++){
                ans.push_back(matrix[a][i]);
            }
            
            a++;
            
            //iterating last coulumn
            for(int i=a;i<=b;i++){
                ans.push_back(matrix[i][g]);
            }
            
            g--;
            
            //iterating last row
            if(a<=b){
                for(int i=g;i>=f;i--){
                    ans.push_back(matrix[b][i]);
                }
                b--;
            }
            
            //iterating first column
            if(f<=g){
                for(int i=b;i>=a;i--){
                    ans.push_back(matrix[i][f]);
                }
                f++;
            }
        }        
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Endss
