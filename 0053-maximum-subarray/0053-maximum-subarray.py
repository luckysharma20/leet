class Solution:
    def maxSubArray(self, arr: List[int]) -> int:
        n=len(arr)
        maxi=arr[0]
        res=arr[0]
        for i in range(1,n):
            maxi=max(maxi+arr[i],arr[i])
            res=max(res,maxi)
        return res