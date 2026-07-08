class Solution {
    public int maxSubArray(int[] arr) {
        int n=arr.length;
        int res=arr[0];
        int maxi=arr[0];
        for (int i=1;i<n;i++){
            maxi=Math.max(maxi+arr[i],arr[i]);
            res=Math.max(maxi,res);
        }
        return res;
    }
}