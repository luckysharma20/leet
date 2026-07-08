class Solution:
    def longestConsecutive(self, arr: List[int]) -> int:
        n=len(arr)
        if n==0:
            return 0
        longest=1
        st=set(arr)
        for it in st:
            if(it-1) not in st:
                cnt=1
                x=it
                while(x+1) in st:
                    x+=1
                    cnt+=1
                longest=max(longest,cnt)
        return longest