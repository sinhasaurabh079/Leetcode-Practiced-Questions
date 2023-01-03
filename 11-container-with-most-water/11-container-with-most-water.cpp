class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int mx=0;

       // i for left part and j for right part
        while(i<j)
        {
            int lh=height[i];     // left height
            int rh=height[j];     // right height
            int min_h=min(lh,rh); // min height

         // (j-i) is width and min_h is length 
        // as water can only be filled uppto minimum height
        // and we are calculating the area for each tower from the last till i & j meets
            mx = max(mx,min_h*(j-i));

         // if left height is small,then we need to find next possible long height with maximum area from left
            if(lh<rh)
              i++;
            else
              j--;  
        }
        return mx;    
    }
};