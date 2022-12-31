class Solution {
public:
int distinctAverages(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    unordered_set<int> st;
    for(int i = 0; i < nums.size()/2; ++i) st.insert(nums[i] + nums[nums.size()-i-1]);
    return st.size();
}
};