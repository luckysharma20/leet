class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprofit=prices[0],res=0;
        for (int i=1;i<n;i++){
            minprofit=min(prices[i],minprofit);
            res=max(res,prices[i]-minprofit);
        }
        return res;
    }
};