class Solution {
public:
    
    void f(int start,vector<int> &nums,vector<int> &current,vector<vector<int>> &ans){
        ans.push_back(current);
        for (int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            current.push_back(nums[i]);
            f(i+1,nums,current,ans);
            current.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> current;
        vector<vector<int>> ans;
        f(0,nums,current,ans);
        return ans;
    }
};