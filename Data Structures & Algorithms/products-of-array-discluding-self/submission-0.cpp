class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> prefix_product(nums.size(), 1);
        std::vector<int> suffix_product(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++){
            prefix_product[i] = prefix_product[i-1] * nums[i-1];
        }
        for(int j = nums.size() - 2; j >= 0; j--){
            suffix_product[j] = suffix_product[j+1] * nums[j+1];
        }
        std::vector<int> results;
        for(int i = 0; i < nums.size(); i++){
            results.push_back(suffix_product[i] * prefix_product[i]); 
        }
        return results;
    }
};
