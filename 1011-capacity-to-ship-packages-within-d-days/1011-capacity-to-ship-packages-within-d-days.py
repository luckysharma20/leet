class Solution:
    def shipWithinDays(self, arr: List[int], D: int) -> int:
        n = len(arr)

        right = 0
        for i in range(0,n):
            right += arr[i]        
        left = max(arr)
        while(left <= right):
            mid = left + (right - left) // 2
            x = 0
            rdays = 1
            for i in range(0,n):
                x += arr[i]
                if(x > mid):
                    rdays+=1
                    x = arr[i]
                    if(rdays > D):
                        break               
            if(rdays <= D):
                right = mid - 1          
            else:
                left = mid + 1                  
        return left