class Solution:
    def singleNumber(self, arr: List[int]) -> int:
        xor1 = 0
        for i in range(len(arr)):
            xor1 = xor1 ^ arr[i]
        return xor1
