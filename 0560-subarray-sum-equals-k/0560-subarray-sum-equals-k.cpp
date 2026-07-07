class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> pre;
        int res=0,currsum=0;
        for (int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if (currsum==k){
                res++;
            }
            if (pre.find(currsum-k)!=pre.end()){
                res+=pre[currsum-k];
            }
            pre[currsum]++;
            
        }
        return res;
    }
};