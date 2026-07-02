class Solution {
public:
    void validparenthesis(int n, int open, string curr, vector<string>& ans) {
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }
        if (open < n)
            validparenthesis(n, open + 1, curr + '(', ans);
        if (curr.length() - open < open)
            validparenthesis(n, open, curr + ')', ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        validparenthesis(n,0,"",ans);
        return ans;
    }
};