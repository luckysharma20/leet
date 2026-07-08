class Solution {
    public int longestConsecutive(int[] arr) {
        int n=arr.length;
        if (n==0) return 0;
        int longest=1;
        HashSet<Integer> st=new HashSet<>();
        for(int i=0;i<n;i++){
            st.add(arr[i]);
        }
        for (int it:st){
            if(!st.contains(it-1)){
                int cnt=1;
                int x=it;
                while(st.contains(x+1)){
                    x++;
                    cnt++;
                }
                longest=Math.max(longest,cnt);
            }
        }
        return longest;
    }
}