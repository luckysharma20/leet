class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlen=strs[0].length();
        for(string &str:strs){
            minlen=min(minlen,(int)str.size());
        }
        string res;
        for (int i=0;i<minlen;i++){
            char ch=strs[0][i];
            for(string &s:strs){
                if (s[i]!=ch){
                    return res;
                }
            }
            res.push_back(ch);
        }
        return res;
    }
};