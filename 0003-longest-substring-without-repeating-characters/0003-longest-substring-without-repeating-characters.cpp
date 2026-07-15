class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0 || s.length() == 1)
			return s.length();
		int res = 0;
		vector<bool>vis(256, false);
		int left = 0, right = 0;
		while (right < s.length()) {
			while (vis[s[right]]) {
				
				vis[s[left]] = false;
				left++;
			}
			vis[s[right]] = true;
			res = max(res, (right - left + 1));
			right++;
		}
		return res;
    }
};