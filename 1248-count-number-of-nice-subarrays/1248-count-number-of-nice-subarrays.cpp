class Solution {
public:
    
    int atmost(vector<int>& arr,int k){
        int n=arr.size();
        int start=0,ans=0,odd=0;
        for (int i=0;i<n;i++){
            if(arr[i]%2==1) odd++;
            while(odd>k){
                if(arr[start]%2==1) odd--;
                start++;
            }
            ans+=i-start+1;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int x=atmost(nums,k);
        int y=atmost(nums,k-1);
        return x-y;
    }
};