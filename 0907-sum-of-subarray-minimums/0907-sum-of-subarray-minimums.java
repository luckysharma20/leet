class Solution {
    public int sumSubarrayMins(int[] arr) {
        int n=arr.length;
        int[] left=new int[n];
        int[] right=new int[n];
        Stack<Integer> st=new Stack<>();
        for (int i=0;i<n;i++){
            while(!st.isEmpty() && arr[st.peek()]>arr[i]) st.pop();
            left[i]=st.isEmpty()?(i+1):(i-st.peek());
            st.push(i);
        }
        st.clear();
        for (int i=n-1;i>=0;i--){
            while(!st.isEmpty() && arr[st.peek()]>=arr[i]) st.pop();
            right[i]=st.isEmpty()?(n-i):(st.peek()-i);
            st.push(i);
        }
        long result=0;
        long mod=1_000_000_007L;
        for (int i=0;i<n;i++){
            result=(result+(long)arr[i]*left[i]%mod*right[i])%mod;
        }
        return (int)result;
    }
}