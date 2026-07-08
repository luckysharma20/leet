class Solution {
    public List<Integer> spiralOrder(int[][] mat) {
        int n=mat.length;
        int m=mat[0].length;
        int left=0,top=0;
        int bottom=n-1,right=m-1;
        ArrayList<Integer> ans=new ArrayList<>(); 
        while(left<=right && top<=bottom){
            for (int i=left;i<=right;i++){
                ans.add(mat[top][i]);
            }
            top++;
            for (int i=top;i<=bottom;i++){
                ans.add(mat[i][right]);
            }
            right--;
            if (top<=bottom){
                for (int i=right;i>=left;--i){
                    ans.add(mat[bottom][i]);
                }
                bottom--;
            }
            if (left<=right){
                for (int i=bottom;i>=top;--i){
                    ans.add(mat[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
}