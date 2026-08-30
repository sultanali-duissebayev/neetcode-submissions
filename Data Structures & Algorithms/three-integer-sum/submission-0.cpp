class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> results;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++){
            if(i != 0 && nums[i] == nums[i-1]){
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right){
                if(left != i + 1 && nums[left] == nums[left - 1]){
                    left++;
                    continue;
                }
                if(nums[i] + nums[left] + nums[right] > 0){
                    right--;
                    continue;
                }
                if(nums[i] + nums[left] + nums[right] < 0){
                    left++;
                    continue;
                }
                else{
                    results.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    

                }
            }

        }
        return results;
            
    }
};
