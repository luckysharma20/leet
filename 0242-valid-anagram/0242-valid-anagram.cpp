class Solution {
public:
    
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if (s1.size()!=s2.size()) return false;
        int cnt[26]={0};
        for (char ch:s1){
            cnt[ch-'a']++;
        }
        for (char ch:s2){
            cnt[ch-'a']--;
        }
        for (int i:cnt){
            if (i!=0){
                return false;
            }
        }
        return true;;
    }
    bool isAnagram(string s, string t) {
        return areAnagrams(s,t);
    }
};