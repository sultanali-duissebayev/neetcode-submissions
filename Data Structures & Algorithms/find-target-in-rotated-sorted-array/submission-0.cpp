class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        while(left < right){
            mid = (left + right)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > nums[right]){
                if(nums[mid] > target && nums[left] <= target){
                    right = mid - 1;
                    continue;
                }
                else{
                    left = mid + 1;
                    continue;
                }
            }
            else{
                if(nums[mid] < target && nums[right] >= target){
                    left = mid + 1;
                    continue;
                }
                else{
                    right = mid - 1;
                    continue;
                }
            }

            
        }
        if(nums[left] == target){
            return left;
        }
        else{
            return -1;
        }
       
    }
};
