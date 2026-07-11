class Solution {
    
    boolean check(int[] arr,int day,int k,int m){
        int cnt=0,bouq=0;
        for (int i=0;i<arr.length;i++){
            if (arr[i]<=day) cnt++;
            else{
                bouq+=cnt/k;
                cnt=0;
            }
        }
        bouq+=cnt/k;
        return bouq>=m;
    }
    int maxel(int[] arr){
        int ma=arr[0];
        for (int i=1;i<arr.length;i++){
            if(arr[i]>ma) ma=arr[i];
        }
        return ma;
    }
    public int minDays(int[] arr, int m, int k) {
        int low=0;
        int high=maxel(arr);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(arr,mid,k,m)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
}