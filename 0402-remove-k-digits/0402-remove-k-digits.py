class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        stack=[]
        n=len(num)
        for i in range(n):
            while stack and k>0 and (ord(stack[-1])-ord('0'))>(ord(num[i])-ord('0')):
                stack.pop()
                k-=1
            stack.append(num[i])
        while k>0:
            stack.pop()
            k-=1
        if not stack:
            return "0"
        res=[]
        while stack:
            res.append(stack.pop())
        while res and res[-1]=='0':
            res.pop()
        res.reverse()
        if not res:
            return "0"
        return ''.join(res)