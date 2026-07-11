class Solution {
    
    boolean caneat(int[] arr,int k,int h){
        long hours=0;
        for (int i:arr){
            hours+=(i+h-1)/h;
        }
        return hours<=k;
    }
    int m(int[] arr){
        int max=arr[0];
        for(int i=1;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    public int minEatingSpeed(int[] arr, int k) {
        int low=1;
        int high = m(arr);
        while(low<=high){
            int mid=low+(high-low)/2;
            if (caneat(arr,k,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
}