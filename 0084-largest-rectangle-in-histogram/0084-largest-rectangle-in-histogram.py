class Solution:
    def largestRectangleArea(self, arr: List[int]) -> int:
        st=[]
        tp,curr=0,0
        n=len(arr)
        res=0
        for i in range(n):
            while st and arr[st[-1]]>=arr[i]:
                tp=st[-1]
                st.pop()
                width=i if not st else i-st[-1]-1
                res=max(res,arr[tp]*width)
            st.append(i)
        while st:
            tp=st[-1]
            st.pop()
            curr=arr[tp]*(n if not st else n-st[-1]-1)
            res=max(res,curr)
        return res