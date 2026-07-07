class Solution {
public:
    string countAndSay(int n) {
        string result="1";
        for (int i=1;i<n;i++){
            string curr="";
            int cnt=1;
            for (int j=1;j<result.size();j++){
                if (result[j]==result[j-1]) cnt++;
                else{
                    curr+=to_string(cnt)+result[j-1];
                    cnt=1;
                }
            }
            curr+=to_string(cnt)+result.back();
            result=curr;
        }
        return result;
    }
};