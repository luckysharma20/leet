class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for (int i=0;i<n;i++){
            unordered_map<char,int> f;
            for (int j=i;j<n;j++){
                f[s[j]]++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for (auto it:f){
                    maxi=max(maxi,it.second);
                    mini=min(mini,it.second);
                }
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};