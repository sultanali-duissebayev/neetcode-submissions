class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> pre_results;
            for(std::string i : strs){
                string j = i;
                sort(j.begin(), j.end());
                pre_results[j].push_back(i);
            }
            vector<vector<string>> results;
            for(auto& [c, d] : pre_results)
            {
                results.push_back(d);
            }
            return results;
            

    }
};
