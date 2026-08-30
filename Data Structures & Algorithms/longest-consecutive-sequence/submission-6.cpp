class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> bullshit(nums.begin(), nums.end());
        int absolute_maximum = 0;
        for(int i : nums){
            if(!bullshit.count(i - 1)){
                int j = 1;
                int maximum = 1;
                while(bullshit.count(i + j)){
                  maximum++;
                  absolute_maximum = max(maximum, absolute_maximum);
                  j++;
                }
                absolute_maximum = max(maximum, absolute_maximum);
                
            }
        }
        return(absolute_maximum);
    }
};
