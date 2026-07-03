class Solution {
public:
    void generatePal(string& s, vector<vector<bool>>& isPalin) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            isPalin[i][i] = true;
        }
        for (int len = 2; len <= n; len++) {

            for (int i = 0, j = i + len - 1; j < n; i++, j++) {
                if (s[i] == s[j] && (len == 2 || isPalin[i + 1][j - 1])) {
                    isPalin[i][j] = true;
                }
            }
        }
    }
    int minCut(string s) {
        int n = s.size();
        vector<vector<bool>> isPalin(n, vector<bool>(n, false));
        generatePal(s, isPalin);
        vector<int> dp(n, n);
        dp[0] = 0;
        for (int i = 1; i < n; i++) {
            if (isPalin[0][i]) {
                dp[i] = 0;
            } else {
                for (int j = i; j >= 1; j--) {
                    if (isPalin[j][i]) {
                        dp[i] = min(dp[i], 1 + dp[j - 1]);
                    }
                }
            }
        }
        return dp[n - 1];
    }
};