class Solution {
public:
    int minStoneSum(vector<int>& nums, int k) 
    {
        priority_queue<int>pq(nums.begin(),nums.end());
        while(k--&&pq.size())
        {
            auto temp=pq.top();
            pq.pop();
            int val;
            if(temp%2==0)
            {
                val=temp/2;
            }
            else
            {
                val=temp/2+1;
            }
            pq.push(val);
        }
        int sum=0;
        while(pq.size())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};