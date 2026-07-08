class Solution:
    def findMaxConsecutiveOnes(self, arr: List[int]) -> int:
        maxcount=0
        count=0
        for i in range(0,len(arr)):
            if arr[i]==1:
                count+=1
                maxcount=max(maxcount,count)
            else:
                count=0
        return maxcount