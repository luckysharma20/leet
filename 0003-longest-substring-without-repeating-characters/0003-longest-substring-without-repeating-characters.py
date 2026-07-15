class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if (len(s)==0 or len(s)==1):
            return len(s)
        left=0
        right=0
        vis=[False]*256
        res=0
        while right<len(s):
            while vis[ord(s[right])]==True:
                vis[ord(s[left])]=False
                left+=1
            vis[ord(s[right])]=True
            res=max(res,right-left+1)
            right+=1
        return res
        