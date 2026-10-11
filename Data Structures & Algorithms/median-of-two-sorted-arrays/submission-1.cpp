class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int m  = nums1.size();
        int n = nums2.size();
        int low = 0;
        int high = m;
        while(low <= high){
            int i = (low + high) / 2;
            int j = (m + n + 1) / 2 - i;
            int max_left1 = (i > 0) ? nums1[i-1] : INT_MIN;
            int min_right1 = (i < m) ? nums1[i] : INT_MAX;
            int max_left2 = (j > 0) ? nums2[j-1] : INT_MIN;
            int min_right2 = (j < n) ? nums2[j] : INT_MAX;
            if(max_left1 <= min_right2 && max_left2 <= min_right1){
                if ((m + n) % 2 == 1) {
                    return std::max(max_left1, max_left2);
                }
                return (std::max(max_left1, max_left2) + std::min(min_right1, min_right2)) / 2.0;
            }
            else if (max_left1 > min_right2) {
                high = i - 1;
            } else {
                low = i + 1;
            }
        }
        
    }
};
