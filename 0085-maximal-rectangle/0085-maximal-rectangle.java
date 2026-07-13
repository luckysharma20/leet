class Solution {
    public int largestRectangleArea(int[] arr) {
        int res = 0;
        Stack<Integer> st=new Stack<>();
        int n = arr.length;
        int tp, curr;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.peek()] >= arr[i]) {
                tp = st.peek();
                st.pop();
                int width = st.isEmpty() ? i : i - st.peek() - 1;
                res = Math.max(res, arr[tp] * width);
            }
            st.push(i);
        }
        while (!st.isEmpty()) {
            tp = st.peek();
            st.pop();
            curr = arr[tp] * (st.isEmpty() ? n : n - st.peek() - 1);
            res = Math.max(res, curr);
        }
        return res;
    }
    public int maximalRectangle(char[][] matrix) {
        int n=matrix.length,m=matrix[0].length;
        int[] heights=new int[m];
        int ans=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(matrix[i][j]=='1') heights[j]++;
                else heights[j]=0;

            }
            ans=Math.max(ans,largestRectangleArea(heights));
        }
        return ans;
    }
}