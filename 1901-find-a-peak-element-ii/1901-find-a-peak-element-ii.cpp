class Solution {
public:
    
    vector<int> findpeak(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        int mini=-1;
        while (low<=high){
            int mid=low+(high-low)/2;
            int maxrow=0;
            for (int i=1;i<n;++i){
                if (mat[i][mid]>mat[maxrow][mid]){
                    maxrow=i;
                }
            }
            int left=mid-1>=0?mat[maxrow][mid-1]:mini;
            int right=mid+1<m?mat[maxrow][mid+1]:mini;
            if (mat[maxrow][mid]>=left && mat[maxrow][mid]>=right){
                return {maxrow,mid};
            }
            else if(right>mat[maxrow][mid]) low=mid+1;
            else high=mid-1;
        }
        return {-1,-1};
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        return findpeak(mat);
    }
};