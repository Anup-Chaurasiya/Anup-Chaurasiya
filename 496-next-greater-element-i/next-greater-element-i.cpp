class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        int n=nums2.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            int ele=nums2[i];

            while(!st.empty() && st.top()<ele){
                st.pop();
            }
            
            int res = (st.empty()) ? -1 : st.top();

            mpp.insert({ele,res});
            st.push(ele);
            
        }
        vector<int>ans;
        for(auto it : nums1){
            ans.push_back(mpp[it]);
        }

        return ans;
    }
};