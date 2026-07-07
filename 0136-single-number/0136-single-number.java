class Solution {
    public int singleNumber(int[] arr) {
        int xor1 = 0;
        int n = arr.length;
        for (int i = 0; i < n; i++)
            xor1 = xor1 ^ arr[i];
        return xor1;
    }
}