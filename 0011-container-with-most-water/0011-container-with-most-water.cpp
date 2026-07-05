class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0,j=height.size()-1,maxwater=0;
  
        while(i<j){
            int ht =min(height[i],height[j]);
            int width=j-i;
            int currwater=ht*width;
            maxwater=max(currwater,maxwater);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxwater;
    }
};