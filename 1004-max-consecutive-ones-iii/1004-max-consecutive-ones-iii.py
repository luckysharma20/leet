class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        res,start,end,cnt=0,0,0,0
        while(end<len(nums)):
            if(nums[end]==0):
                cnt+=1
            while(cnt>k):
                if(nums[start]==0):
                    cnt-=1
                start+=1
            res=max(res,end-start+1)
            end+=1
        return res