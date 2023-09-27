LC: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        string res = to_string(x);
        int i=0, n=res.size()-1;
        while(i<=n)
            if(res[i++] != res[n--])
                return false;
        return true;
    }
};
