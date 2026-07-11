class Solution {
    public int singleNonDuplicate(int[] arr) {
        int lo=0;
        int hi=arr.length-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(mid%2==1) mid--;
            if(arr[mid]==arr[mid+1]) lo=mid+2;
            else hi=mid;
        }
        return arr[lo];
    }
}