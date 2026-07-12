class Solution:
    def nextGreaterElements(self, arr: List[int]) -> List[int]:
        n=len(arr)
        st=[]
        res=[-1]*n
        for i in range(2*n-1,-1,-1):
            while st and st[-1]<=arr[i%n]:
                st.pop()
            if(i<n):
                if st:
                    res[i] = st[-1]
            st.append(arr[i%n])
        return res