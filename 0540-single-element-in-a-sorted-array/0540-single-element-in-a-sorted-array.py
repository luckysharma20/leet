class Solution:
    def singleNonDuplicate(self, arr: List[int]) -> int:
        lo,hi=0,len(arr)-1
        while(lo<hi):
            mid=int((lo+hi)/2)
            if(mid%2==1):
                mid-=1
            if(arr[mid]==arr[mid+1]):
                lo=mid+2
            else:
                hi=mid
        return arr[lo]