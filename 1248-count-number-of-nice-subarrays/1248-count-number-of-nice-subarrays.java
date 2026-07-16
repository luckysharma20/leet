class Solution {
    
    public int atmost(int[] arr,int k){
        int n=arr.length;
        int start=0,ans=0,odd=0;
        for (int i=0;i<n;i++){
            if(arr[i]%2==1) odd++;
            while(odd>k){
                if(arr[start]%2==1) odd--;
                start++;
            }
            ans+=i-start+1;
        }
        return ans;
    }
    public int numberOfSubarrays(int[] nums, int k) {
        return (atmost(nums,k)-atmost(nums,k-1));
    }
}