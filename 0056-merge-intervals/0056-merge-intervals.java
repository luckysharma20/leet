class Solution {
    public int[][] merge(int[][] a) {
        Arrays.sort(a, (i1, i2) -> i1[0] - i2[0]);
        int index = 0;

        for (int i = 1; i < a.length; i++) {
            if (a[i][0] <= a[index][1]) a[index][1] = Math.max(a[i][1], a[index][1]);
            else {
                index++;
                a[index] = a[i];
            }
        }
        return Arrays.copyOf(a, index + 1);
    }
}