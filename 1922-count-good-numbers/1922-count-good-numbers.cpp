class Solution {
public:
    
    const long long mod=1e9+7;
    long long solve(long long base, long long exp) {
        long long result=1;
        base%=mod;
        while(exp>0){
            if (exp & 1) result=(result*base)%mod;
            base=(base*base)%mod;
            exp>>=1;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long e=(n+1)/2;
        long long o=n/2;
        long long ans=(solve(5,e)*solve(4,o))%mod;
        return (int) ans;
    }
};