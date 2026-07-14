class Solution {
    public int[] maxSlidingWindow(int[] arr, int k) {
        int n=arr.length;
        Deque<Integer> dq=new ArrayDeque<>();
        int[] list=new int[n-k+1];
        int ind=0;
        for (int i=0;i<n;i++){
            if(!dq.isEmpty() && dq.peekFirst()<=i-k) dq.pollFirst();
            while(!dq.isEmpty() && arr[dq.peekLast()]<=arr[i]) dq.pollLast();
            dq.addLast(i);
            if(i>=k-1) list[ind++]=arr[dq.peekFirst()];
        }
        return list;
    }
}