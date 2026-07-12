class Solution:
    def trap(self, arr: List[int]) -> int:
        n=len(arr)
        leftmax=rightmax=total=0
        l,r=0,n-1
        while(l<r):
            if arr[l]<=arr[r]:
                if leftmax>arr[l]:
                    total+=leftmax-arr[l]
                else:
                    leftmax=arr[l]
                l+=1
            else:
                if rightmax>arr[r]:
                    total+=rightmax-arr[r]
                else:
                    rightmax=arr[r]
                r-=1
        return total