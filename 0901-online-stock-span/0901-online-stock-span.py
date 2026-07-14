class StockSpanner:

    def __init__(self):
        self.st=[]
        self.ind=-1

    def next(self, price: int) -> int:
        self.ind+=1
        while(self.st and self.st[-1][0]<=price):
            self.st.pop()
        ans=self.ind-(self.st[-1][1] if self.st else-1)
        self.st.append((price,self.ind))
        return ans


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)