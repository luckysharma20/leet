class Solution {
public:
    
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        stringstream ss(s);
        string word,result="";
        while(ss>>word){
            reverse(word.begin(),word.end());
            if (!result.empty()) result+=" ";
            result+=word;
        }
        return result;
    }
};