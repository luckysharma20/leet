class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        int n=arr.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        stack<int> st;
        for (int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            left[i]=st.empty()?(i+1):(i-st.top());
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for (int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            right[i]=st.empty()?(n-i):(st.top()-i);
            st.push(i);
        }
        int result=0;
        const int mod=1e9+7;
        for (int i=0;i<n;i++){
            result=(result+(long long)arr[i]*left[i]%mod*right[i])%mod;
        }
        return result;
    }
};