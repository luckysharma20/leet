class Solution {
public:

    int f(vector<int> &arr,int k){
        int n=arr.size();
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (arr[mid]==k){
                first=mid;
                high=mid-1;
            }
            else if (arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }
    int l(vector<int> &arr,int k){
        int n=arr.size();
        int low=0,high=n-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (arr[mid]==k){
                last=mid;
                low=mid+1;
            }
            else if (arr[mid]< k) low=mid+1;
            else high=mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=f(nums,target);
        if (first==-1) return {-1,-1};
        int last=l(nums,target);
        return {first,last};
    }
};