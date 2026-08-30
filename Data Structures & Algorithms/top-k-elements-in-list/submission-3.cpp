class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> counts;
        for(int i : nums){
            counts[i]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& [a, b] : counts){
            buckets[b].push_back(a);
        }
        vector<int> results;
        int i = nums.size();
        while(results.size() < k && i>=0){
            for(int j = 0; j < buckets[i].size(); j++){
                if(results.size() < k){
                    results.push_back(buckets[i][j]);
                }    
            }
            i--;
        }
        return results;
    }
};
    
