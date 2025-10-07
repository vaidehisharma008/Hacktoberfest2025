class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int lp=0 , rp=height.size()-1;
        while(lp < rp){
            int w = rp - lp;
           int ht = min(height[lp], height[rp]);
            int currWater = (w * ht);
            max_water = max(max_water, currWater);
        
        height[lp] < height[rp] ? lp++ : rp--;
         
        }
        return max_water ;
        
    }
    
        
        
    };
