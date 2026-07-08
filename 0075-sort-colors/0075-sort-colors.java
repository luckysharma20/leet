class Solution {
    public void sortColors(int[] arr) {
        int n=arr.length;
        int left=0,mid=0,right=n-1;
        while(mid<=right){
            if (arr[mid]==0){
                int temp=arr[left];
                arr[left]=arr[mid];
                arr[mid]=temp;
                left++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                int temp=arr[mid];
                arr[mid]=arr[right];
                arr[right]=temp;
                right--;
            }
        }
    }
}