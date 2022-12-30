class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0)    return 0;
        if(n==1)    return nums[0];
        vector<int> ip(n+1);
        ip[0] = nums[0];
        ip[1] = max(nums[0], nums[1]);
        for(int i = 2; i < n; i++)
        {
            ip[i] = max(ip[i-1], nums[i] + ip[i-2]);
        }
        return ip[n-1];
    }
};