class Solution {
public:
    void gen(int i,vector<int>& nums,vector<vector<int>>& res)
    {
      if(i==nums.size())
      {
        res.push_back(nums);
        return;
      }
      
      for(int a=i;a<nums.size();a++)
      {
        swap(nums[i],nums[a]);
        gen(i+1,nums,res);
         swap(nums[i],nums[a]);
      }
      
    }
             
    
    vector<vector<int>> permute(vector<int>& nums) {
      
        vector<vector<int>> res;
      gen(0,nums,res);
        
      return res;
    }
};