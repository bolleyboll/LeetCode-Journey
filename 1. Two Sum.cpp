// LC: https://leetcode.com/problems/two-sum/description/

#include <bits/stdc++.h>
using namespace std;

// Brute force solution
// Time complexity: O(n^2)
// Space complexity: O(1)
// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         vector<int> res(2);

//         for (int i = 0; i < size(nums); i++)
//         {
//             for (int j = i + 1; j < size(nums); j++)
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     res[0] = i;
//                     res[1] = j;
//                 }
//             }
//         }
//         return res;
//     }
// };

// Map solution
// Time complexity: O(n)
// Space complexity: O(n)
// Since we alter the array when sorting, this is the best solution. 2 Pointer solution is not applicable here, it will only work when we have to return if the 2 sum exists or not.
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        vector<int> res(2);

        for (int i = 0; i < size(nums); i++)
        {
            int more = target - nums[i];
            if (mp.find(more) == mp.end())
            {
                mp[nums[i]] = i;
            }
            else
            {
                res[0] = i;
                res[1] = mp.find(more)->second;
                break;
            }
        }
        return res;
    }
};
