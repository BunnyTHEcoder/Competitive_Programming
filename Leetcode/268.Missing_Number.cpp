class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++)
        {
            int el=nums[i];
            ans[el]=1;
        }
        for(int i=0;i<=n;i++)
        {   if(ans[i]==0)
                return i; 
        }
            return 0;    
    }
};