class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while(right >= 0 && left < s.length()){
            if(isalnum(s[left])) {
                if(isalnum(s[right])) {
                    if(tolower(s[left]) == tolower(s[right])) {
                        right --;
                        left++;
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    right--;
                    continue;
                }

            }
            if(isalnum(s[right])){
                left++;
                continue;
            }
            else{
                right--;
                left++;
                continue;
            }
        }
        return true;



    }
};
