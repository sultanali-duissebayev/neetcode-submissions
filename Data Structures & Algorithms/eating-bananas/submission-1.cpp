class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *std::max_element(piles.begin(), piles.end());
        int mid;
        int time;
        int minimum = right;
        while(left <= right){
            time = 0;
            mid = (left + right)/2;
            int i = 0;
            while(i< piles.size() && time <= h){
                time += (piles[i] + mid - 1)/mid;
                i++;
            }
            if(time <= h){
                minimum = mid;
                right = mid - 1;
            }
            if(time > h){
                left = mid + 1;
            }

        }
        return minimum;
        
    }
};
