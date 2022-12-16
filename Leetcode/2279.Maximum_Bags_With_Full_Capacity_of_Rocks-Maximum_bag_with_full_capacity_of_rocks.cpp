class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> vec;
        for(int i=0;i<capacity.size();i++){
            vec[i]=capacity[i]-rocks[i];
        }
        int a=additionalRocks;
        sort(vec.begin(), vec.end());
        int j=0;
        while(a>0){
            a=a-vec[j];
            j++;
        }       
        return j+1;
    }
};