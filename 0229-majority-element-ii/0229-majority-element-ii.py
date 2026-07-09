class Solution:
    def majorityElement(self, arr: List[int]) -> List[int]:
        ls=[]
        cnt1=0
        cnt2=0
        el1=float('-inf')
        el2=float('-inf')
        for i in range(0,len(arr)):
            if arr[i]!=el2 and cnt1==0:
                cnt1=1
                el1=arr[i]
            elif cnt2==0 and arr[i]!=el1:
                cnt2=1
                el2=arr[i]
            elif arr[i]==el1:
                cnt1+=1
            elif arr[i]==el2:
                cnt2+=1
            else:
                cnt1-=1
                cnt2-=1
        cnt1,cnt2=0,0
        for i in range(0,len(arr)):
            if(arr[i]==el1):
                cnt1+=1
            if(arr[i]==el2):
                cnt2+=1
        if(cnt1>(len(arr)/3)):
            ls.append(el1)
        if(cnt2>(len(arr)/3)):
            ls.append(el2)
        return ls