class Solution {
public:
    
    bool check(vector<int> &arr,int day,int k,int m){
        int cnt=0,bouq=0;
        for (int i=0;i<arr.size();i++){
            if (arr[i]<=day) cnt++;
            else{
                bouq+=cnt/k;
                cnt=0;
            }
        }
        bouq+=cnt/k;
        return bouq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=0;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(bloomDay,mid,k,m)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};