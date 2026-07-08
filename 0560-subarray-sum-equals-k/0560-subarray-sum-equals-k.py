class Solution:
    def subarraySum(self, arr: List[int], k: int) -> int:
        mpp={0:1}
        cnt=0
        sum=0
        for i in range(len(arr)):
            sum+=arr[i]
            rem=sum-k
            if rem in mpp:
                cnt+=mpp[rem]
            mpp[sum]=mpp.get(sum,0)+1
        return cnt