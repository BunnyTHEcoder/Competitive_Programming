class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int a=nums.size();
        vector<int>ans(a+1,0);
        for(int i=0;i<a;i++)
        {
            int el=nums[i];
            ans[el]=1;
        }
        for(int i=0;i<=a;i++)
        {   if(ans[i]==0)
                return i; 
        }
            return 0;    
    }
};