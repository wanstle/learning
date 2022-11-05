/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为 K 的子数组
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        hash[0] = 1;
        int n = nums.size(),sum = 0,res = 0;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            res += hash[sum-k];
            hash[sum]++;
        }
        return res;
    }
};
// @lc code=end

