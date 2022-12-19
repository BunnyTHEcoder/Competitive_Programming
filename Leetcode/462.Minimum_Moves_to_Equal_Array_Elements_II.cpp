class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long int minn=INT_MAX,sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long int diff=abs(nums[i]-nums[j]);
                sum=sum+diff;
                
            }
            minn=min(sum,minn);
            sum=0;
        }
        return minn;
    }
};