class Solution {
    public int majorityElement(int[] arr) {
        int ele=0;
        int cnt=0;
        int n=arr.length;
        for(int i=0;i<n;i++){
            if(cnt==0){
                ele=arr[i];
            }
            if(ele==arr[i]) cnt++;
            else cnt--;
        }
        return ele;
    }
}