class Solution:
    def subArrayRanges(self, arr: List[int]) -> int:
        ans=0
        n=len(arr)
        for i in range(n):
            maxi=arr[i]
            mini=arr[i]
            for j in range(i,n):
                maxi=max(maxi,arr[j])
                mini=min(mini,arr[j])
                ans+=(maxi-mini)
        return ans