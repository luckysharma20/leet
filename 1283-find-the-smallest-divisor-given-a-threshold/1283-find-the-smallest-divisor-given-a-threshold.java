class Solution {
    
    int m(int[] arr){
        int ma=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]>ma) ma=arr[i];
        }
        return ma;
    }
    public int smallestDivisor(int[] nums, int threshold) {
        int low=1;
        int high=m(nums);
        int ans=-1;
        while (low<=high){
            int sum=0;
            int mid=low+(high-low)/2;
            for (int el:nums){
                sum+=(el+mid-1)/mid;
            }
            if (sum<=threshold){
            ans=mid;
            high=mid-1;
            }
            else low=mid+1;

        }
        return ans;
    }
}