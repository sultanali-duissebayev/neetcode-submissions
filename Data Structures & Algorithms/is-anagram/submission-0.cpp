class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        std::unordered_map<char, int> counts;
        for(char c : s){
            counts[c]++;
        }
        for(char c : t){
            counts[c]--;
        }
        for(auto& [c, d] : counts){
            if(d == 0){
                continue;
            }
            return false;
        }
        return true;
    }
};
