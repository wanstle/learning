/*
 * @lc app=leetcode.cn id=1929 lang=cpp
 *
 * [1929] 数组串联
 */

// @lc code=start
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n*2);
        for(int i = 0;i < n;i++){
            ans[i] = ans[i + n] = nums[i];
        }
        return ans;
    }
};
// @lc code=end

