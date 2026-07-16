class Solution:
    
    def countAtMost(self, nums, k):
        left = 0
        res = 0
        for right in range(len(nums)):
            if nums[right] % 2 != 0:
                k -= 1
            while k < 0:
                if nums[left] % 2 != 0:
                    k += 1
                left += 1
            res += (right - left + 1)
        return res
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        return self.countAtMost(nums,k)-self.countAtMost(nums,k-1)