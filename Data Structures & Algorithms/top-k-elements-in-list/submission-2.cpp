class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> counts;
        for(int i : nums){
            counts[i]++;
        }
        vector<std::pair<int, int>> vec(counts.begin(), counts.end());
        std::sort(vec.begin(), vec.end(), [] (const auto& a, const auto& b){
            return a.second > b.second;
        });
        vector<int> results;
        for(int i = 0; i < k; i++){
            results.push_back(vec[i].first);
        }
        return results;
    }
};
