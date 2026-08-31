class Solution {
public:
    int trap(vector<int>& height) {
    int max_left = 0;
    int max_right = 0;
    int left = 0;
    int right = height.size() - 1;
    int water = 0;
        while(left < right){
            if(height[left] <= height[right]){
                if(max_left < height[left]){
                    max_left = height[left];
                }
                water += (max_left - height[left]);
                left++;
                continue;
            }
                
            else if(height[left] >= height[right]){
                if (max_right < height[right]){
                    max_right = height[right];
                }
                water += (max_right - height[right]);
                right--;
                continue;
            }
           
        }
    return water;
        

        
        
    }
};
