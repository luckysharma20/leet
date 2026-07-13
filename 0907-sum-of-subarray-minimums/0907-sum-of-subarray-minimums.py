class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        n=len(arr)
        mod=10**9+7
        left=[0]*n
        right=[0]*n
        st=[]
        for i in range(n):
            while st and arr[st[-1]]>arr[i]:
                st.pop()
            left[i]=i-(st[-1]if st else -1)
            st.append(i)
        st=[]
        for i in range(n-1,-1,-1):
            while st and arr[st[-1]]>=arr[i]:
                st.pop()
            right[i]=(st[-1] if st else n)-i
            st.append(i)
        result=0
        for i in range(n):
            result+=arr[i]*left[i]*right[i]
        return result%mod