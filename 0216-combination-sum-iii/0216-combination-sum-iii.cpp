class Solution {
public:
    void f(int sum, int last, vector<vector<int>>& ans, int k,
           vector<int>& ds) {
        if (sum == 0 && ds.size() == k) {
            ans.push_back(ds);
            return;
        }
        if (sum <= 0 || ds.size() > k)
            return;
        for (int i = last; i <= 9; i++) {
            if (i <= sum) {
                ds.push_back(i);
                f(sum-i, i+1, ans,k, ds);
                ds.pop_back();
            }
            else break;
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(n,1,ans,k,ds);
        return ans;
    }
};