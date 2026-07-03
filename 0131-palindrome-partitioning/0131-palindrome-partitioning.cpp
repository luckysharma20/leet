class Solution {
public:
    
    bool ispalin(string s){
        string s1=s;
        reverse(s1.begin(),s1.end());
        return s1==s;
    }
    void f(string s,vector<string> &ds,vector<vector<string>> &ans){
        if(s.size()==0){
            ans.push_back(ds);
            return;
        }
        
        for (int i=0;i<s.size();i++){
            string past=s.substr(0,i+1);
            if(ispalin(past)){
                ds.push_back(past);
                f(s.substr(i+1),ds,ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
        f(s,partitions,ans);
        return ans;
    }
};