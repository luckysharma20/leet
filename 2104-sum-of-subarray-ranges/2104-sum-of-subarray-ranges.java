class Solution {
    public long subArrayRanges(int[] arr) {
        int n=arr.length;
        int[] leftmin=new int[n];
        int[] leftmax=new int[n];
        int[] rightmin=new int[n];
        int[] rightmax=new int[n];
        Stack<Integer> st=new Stack<>();
        for (int i=0;i<n;i++){
            while(!st.isEmpty() && arr[st.peek()]>arr[i]) st.pop();
            leftmin[i]=st.isEmpty()?(i+1):i-st.peek();
            st.push(i);
        }
        while(!st.isEmpty()) st.pop();
        for (int i=n-1;i>=0;i--){
            while(!st.isEmpty() && arr[st.peek()]>=arr[i]) st.pop();
            rightmin[i]=st.isEmpty()?(n-i):st.peek()-i;
            st.push(i);
        }
        while(!st.isEmpty()) st.pop();
        for (int i=0;i<n;i++){
            while(!st.isEmpty() && arr[st.peek()]<arr[i]) st.pop();
            leftmax[i]=st.isEmpty()?(i+1):i-st.peek();
            st.push(i);
        }
        while(!st.isEmpty()) st.pop();
        for (int i=n-1;i>=0;i--){
            while(!st.isEmpty() && arr[st.peek()]<=arr[i]) st.pop();
            rightmax[i]=st.isEmpty()?(n-i):st.peek()-i;
            st.push(i);
        }
        while(!st.isEmpty()) st.pop();
        long result=0;
        for (int i=0;i<n;i++){
            long maxi=(long)arr[i]*leftmax[i]*rightmax[i];
            long mini=(long)arr[i]*leftmin[i]*rightmin[i];
            result+=maxi-mini;
        }
        return result;
    }
}