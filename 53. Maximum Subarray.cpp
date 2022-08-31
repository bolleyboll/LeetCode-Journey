/*
https://leetcode.com/problems/maximum-subarray/
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr_sum = 0;
        int res = INT_MIN;
        
        // int curr_sum = nums[0];
        // int res = nums[0];
        
        for(int i=1; i<n; i++){
            curr_sum += nums[i];
            
            if(res < curr_sum)
                res = curr_sum;
            
            if(curr_sum < 0)
                curr_sum = 0;
            
            // curr_sum = max(nums[i], curr_sum + nums[i]);
            // res = max(res, curr_sum);
        }
        return res;
    }
};