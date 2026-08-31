class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;

        int right = heights.size() - 1;

        int area = 0;

        while(right > left){

            if(heights[left] <= heights[right]){

                if(area < heights[left] * (right - left)){
                    area = heights[left] * (right - left);
                }
                left++;

                }

            if(heights[left] >= heights[right]){

                if(area < heights[right] * (right - left)){
                    area = heights[right] * (right - left);
                }
                right--;

                }

        }
        return area;

        
    }
};
