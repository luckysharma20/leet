class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        int ans=start^goal;
        while(ans>0){
            cnt+=(ans&1);
            ans=ans>>1;
        }
        return cnt;
    }
};