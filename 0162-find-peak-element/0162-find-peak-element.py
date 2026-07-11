class Solution:
    def findPeakElement(self, arr: List[int]) -> int:
        n=len(arr)
        if(n==1):
            return 0
        if(arr[n-1]>arr[n-2]):
            return n-1
        if(arr[0]>arr[1]):
            return 0
        lo=1
        hi=n-2
        while(lo<=hi):
            mid=(lo+hi)//2
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]):
                return mid
            if(arr[mid]<arr[mid+1]):
                lo=mid+1
            else:
                hi=mid-1
        
        return 0