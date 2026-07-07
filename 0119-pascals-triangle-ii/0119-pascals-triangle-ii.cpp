class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        int n=rowIndex+1;
        long long res=1;
        ans.push_back(res);
        for (int i=1;i<n;i++){
            res=res*(n-i);
            res=res/i;
            ans.push_back(res);
        }
        return ans;
    }
};