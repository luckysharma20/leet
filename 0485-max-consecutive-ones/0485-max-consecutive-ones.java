class Solution {

    public int max(int a, int b) {
        if (a >= b)
            return a;
        else
            return b;
    }

    public int findMaxConsecutiveOnes(int[] arr) {
        int maxcount = 0;
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]==1){
                count++;
                maxcount=max(maxcount,count);
            }
            else count=0;
        }
        return maxcount;
    }
}