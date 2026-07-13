class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        int n=arr.size();
        vector<int> leftmin(n),leftmax(n),rightmin(n),rightmax(n);
        stack<int> st;
        for (int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            leftmin[i]=st.empty()?(i+1):i-st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for (int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            rightmin[i]=st.empty()?(n-i):st.top()-i;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for (int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<arr[i]) st.pop();
            leftmax[i]=st.empty()?(i+1):i-st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for (int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
            rightmax[i]=st.empty()?(n-i):st.top()-i;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        long long result=0;
        for (int i=0;i<n;i++){
            long long maxi=(long long)arr[i]*leftmax[i]*rightmax[i];
            long long mini=(long long)arr[i]*leftmin[i]*rightmin[i];
            result+=maxi-mini;
        }
        return result;
    }
};