class Solution:
    def smallestDivisor(self, nums: List[int], k: int) -> int:
        low=1
        high=max(nums)
        while(low<=high):
            mid=(low+high)//2
            sum=0
            for i in nums:
                sum+=(i+mid-1)//mid
            if(sum<=k):
                res=mid
                high=mid-1
            else:
                low=mid+1
        return res