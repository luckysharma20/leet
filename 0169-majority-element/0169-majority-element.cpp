class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int el;
        for (int i=0;i<n;i++){
            if (cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if (el==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int c=0;
        for (int i=0;i<n;i++){
            if (nums[i]==el){
                c++;
            }
        }
        if (c>(n/2)){
            return el;
        }
        return -1;
    }
};