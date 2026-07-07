class Solution {
public:
    int f(vector<int> &arr,int pages){
        int stu=1,pagesstudent=0;
        for (int i=0;i<arr.size();i++){
            if (pagesstudent+arr[i]<=pages){
                pagesstudent+=arr[i];
            }
            else{
                stu++;
                pagesstudent=arr[i];
            }
        }
        return stu;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        if (arr.size()<k) return -1;
        int ans=-1;
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int cntstu=f(arr,mid);
            if (cntstu>k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
    
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,k);
    }
};