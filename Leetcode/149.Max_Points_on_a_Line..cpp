class Solution {
public:

    
    int maxPoints(vector<vector<int>>& pt) {
        int ans=1;
        
        vector<float> arr;
        for(int i=0;i<pt.size()-1;i++){
            map<double,int> mp;
            for(int j=i+1;j<pt.size();j++){
                double x = (double)(pt[j][1]-pt[i][1])/(double)(pt[j][0]-pt[i][0]);
                if(pt[j][1]-pt[i][1]<0 &&(pt[j][0]-pt[i][0])==0 ) 
                    mp[abs(x)]++;
                else
              
                    mp[x]++; 
                
            }
            
        int temp = 0;
            for(auto it:mp)
                temp = max(temp, it.second+1);    
            ans = max(temp, ans);

        }
        
        
        return ans;
    }
 
    
};