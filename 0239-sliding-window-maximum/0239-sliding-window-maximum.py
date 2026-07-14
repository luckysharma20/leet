class Solution:
    def maxSlidingWindow(self, arr: List[int], k: int) -> List[int]:
        n=len(arr)
        list=[]
        dq=[]
        for i in range(n):
            if dq and dq[0]<=i-k:
                dq.pop(0)
            while dq and arr[dq[-1]]<=arr[i]:
                dq.pop()
            dq.append(i)
            if(i>=k-1):
                list.append(arr[dq[0]])
        return list