class Solution {
public:
    
    void f(int index,int sum,vector<int> &arr,vector<vector<int>> &sums,vector<int> &ds){
        if(index==arr.size()){
            sums.push_back(ds);
            return;
        }
        ds.push_back(arr[index]);
        f(index+1,sum-arr[index],arr,sums,ds);
        ds.pop_back();
        f(index+1,sum,arr,sums,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(0,0,nums,ans,ds);
        sort(ans.begin(),ans.end());
        return ans;
    }
};