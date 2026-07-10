class Solution:
    
    def f(self,arr,x):
        low=0
        high=len(arr)-1
        first=-1
        while(low<=high):
            mid=(low+high)//2
            if(arr[mid]==x):
                first=mid
                high=mid-1
            elif(arr[mid]<x):
                low=mid+1
            else:
                high=mid-1
        return first
    
    def l(self,arr,x):
        low=0
        high=len(arr)-1
        last=-1
        while(low<=high):
            mid=(low+high)//2
            if(arr[mid]==x):
                last=mid
                low=mid+1
            elif(arr[mid]<x):
                low=mid+1
            else:
                high=mid-1
        return last

    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first=self.f(nums,target)
        if(first==-1):
            return [-1,-1]
        last=self.l(nums,target)
        return [first,last]