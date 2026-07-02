class Solution {
public:
    double power(double b,long long n){
        if(n==0) return 1;
        double half=power(b,n/2);
        return (n%2==0)? half*half:half*half*b;
    }
    double myPow(double b, int e) {
        long long n=e;
        if(n<0){
            b=1/b;
            n=-n;
        }
        return power(b,n);
    }
};