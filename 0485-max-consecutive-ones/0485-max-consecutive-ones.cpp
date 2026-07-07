class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int max1=0,max2=0;
        for (int i=0;i<n;i++){
            if (nums[i]==1){
                max1+=1;
                max2=max(max2,max1);
            }
            if (nums[i]==0) max1=0;
        }
        return max2;
    }
};