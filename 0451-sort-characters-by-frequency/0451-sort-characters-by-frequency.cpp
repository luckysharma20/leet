class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        vector<int> freq(128,0);
        for (int i=0;i<n;i++){
            freq[s[i]]++;
        }
        vector<pair<int,char>> vp;
        for(int i=0;i<128;i++){
            if (freq[i]!=0){
                vp.push_back({freq[i],(char)i});
            }
        }
        sort(vp.begin(),vp.end(),greater<pair<int,char>>());
        int ind=0;
        for (auto it:vp){
            int cnt=it.first;
            while(cnt--){
                s[ind++]=it.second;
            }
        }
        return s;
    }
};