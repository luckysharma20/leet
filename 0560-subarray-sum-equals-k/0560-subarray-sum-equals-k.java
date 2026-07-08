class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer,Integer> pre=new HashMap<>();
        pre.put(0,1);
        int res=0,currsum=0;
        for (int i=0;i<nums.length;i++){
            currsum+=nums[i];
            if(pre.containsKey(currsum-k)){
                res+=pre.get(currsum-k);
            }
            pre.put(currsum,pre.getOrDefault(currsum,0)+1);    
        }
        return res;
    }
}