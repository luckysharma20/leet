class Solution {
public:
    void r(int i,string &s,vector<string> &ans){
        if (i>=s.length()){
            ans.push_back(s);
            return ;
        }
        r(i+1,s,ans);
        s[i]='0';
        r(i+2,s,ans);
        s[i]='1';
    }
    
    vector<string> validStrings(int n) {
        string s(n,'1');
        vector<string> ans;
        r(0,s,ans);
        return ans;
    }
};