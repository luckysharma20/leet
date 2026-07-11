class Solution {
    public int findKthPositive(int[] arr, int k) {
        int n=arr.length;
        int low=0,high=n-1;
        int ans=n+k;
        while(low<=high){
            int mid=(low+high)/2;
            if (arr[mid]>mid+k){
                ans=mid+k;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
}