class Solution {

    int max(int[] arr){
        int m=arr[0];
        for(int i=1;i<arr.length;i++){
            if(arr[i]>m) m=arr[i];
        }
        return m;
    }
    public int shipWithinDays(int[] arr, int D) {
        int n = arr.length;

        int right = 0;
        for(int i = 0; i < n; i++){
            right += arr[i];
        }
        int left = max(arr);
        while(left <= right){
            int mid = left + (right - left) / 2;
            int x = 0;
            int rdays = 1;
            for(int i = 0; i < n; i++){
                x += arr[i];
                if(x > mid){
                    rdays++;
                    x = arr[i];
                    if(rdays > D) break;
                }
            }
            if(rdays <= D){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
}