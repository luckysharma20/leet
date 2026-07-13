class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int res = 0;
        stack<int> st;
        int n = arr.size();
        int tp, curr;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                tp = st.top();
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                res = max(res, arr[tp] * width);
            }
            st.push(i);
        }
        while (!st.empty()) {
            tp = st.top();
            st.pop();
            curr = arr[tp] * (st.empty() ? n : n - st.top() - 1);
            res = max(res, curr);
        }
        return res;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int> heights(m,0);
        int ans;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(matrix[i][j]=='1') heights[j]++;
                else heights[j]=0;

            }
            ans=max(ans,largestRectangleArea(heights));
        }
        return ans;
    }
};