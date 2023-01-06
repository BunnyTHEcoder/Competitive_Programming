class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        if(costs.size() == 1 && costs[0]<=coins){
            return 1;
        }
        if(costs.size() == 1 && costs[0]>coins){
            return 0;
        }
        sort(costs.begin(), costs.end());
        int c=0;
        int ans=coins;
        for(int i=0;i<costs.size();i++){
            ans=ans-costs[i];
            if(ans<0){
                break;
            }
            c++;
            if(ans==0){
                break;
            }
        }
        if(c<=1){
            return 0;
        }
        return c;
    }
};