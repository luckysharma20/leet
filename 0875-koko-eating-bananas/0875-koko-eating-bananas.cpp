class Solution {
public:
    
    bool c(vector<int> &arr,int mid,int k){
        int n=arr.size();
        long long totalhours=0;
        for (int i=0;i<n;i++){
            totalhours+=(arr[i]+mid-1)/mid;
        }
        return totalhours<=k;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        long long ans=INT_MIN;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(c(piles,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};