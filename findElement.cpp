class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();     //rows
        int n=matrix[0].size();  //columns

        int t=0;
        int b=m-1;
        int mid;

        while(b>t){
            mid=(t+b)/2;

            if(matrix[mid][0]==target) return 1;

            else if(target<matrix[mid][0]){
                b=mid-1;
            }

            else{
                if(target>=matrix[mid+1][0]) t=mid+1;
                else{
                    b=mid;
                    t=mid;
                }
            }
        }

        int l=0;
        int r=n-1;
        int midd;

        while(r>=l){
            midd=(l+r)/2;

            if(matrix[t][midd]==target) return 1;

            else if(target<matrix[t][midd]){
                r=midd-1;
            }

            else{
                l=midd+1;
            }
        }

        return 0;

        
        


    }
};
