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
}