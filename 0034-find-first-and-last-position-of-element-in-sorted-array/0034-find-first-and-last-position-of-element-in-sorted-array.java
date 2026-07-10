class Solution {
    
    int f(int[] arr,int k){
        int n=arr.length;
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (arr[mid]==k){
                first=mid;
                high=mid-1;
            }
            else if (arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }
    int l(int[] arr,int k){
        int n=arr.length;
        int low=0,high=n-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (arr[mid]==k){
                last=mid;
                low=mid+1;
            }
            else if (arr[mid]< k) low=mid+1;
            else high=mid-1;
        }
        return last;
    }
    public int[] searchRange(int[] arr, int x) {
        int first=f(arr,x);
        if (first==-1) return new int[]{-1,-1};
        int last=l(arr,x);
        return new int[]{first,last};
    }
}