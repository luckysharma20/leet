class Solution:
    def subArrayRanges(self, nums: List[int]) -> int:
        stack = []
        total = 0
        for i in range(len(nums) + 1):
            val = nums[i] if i < len(nums) else float("-inf")
            while stack and nums[stack[-1]] > val:
                mid = stack.pop()
                left = mid - stack[-1] if stack else mid + 1
                right = i - mid
                total -= nums[mid] * left * right
            stack.append(i)
        stack = []
        for i in range(len(nums) + 1):
            val = nums[i] if i < len(nums) else float("inf")
            while stack and nums[stack[-1]] < val:
                mid = stack.pop()
                left = mid - stack[-1] if stack else mid + 1
                right = i - mid
                total += nums[mid] * left * right
            stack.append(i)
        return total