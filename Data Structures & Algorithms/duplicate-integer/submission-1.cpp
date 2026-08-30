class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> counter;
        for( int i : nums){
            counter[i]++;
            if(counter[i] >= 2){
                return true;
            }
        }
        return false;
    }
};