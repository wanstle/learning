/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = -10000;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            if(sum<=0){
                sum = 0;
            }
            sum+=nums[i];
            max = max>sum?max:sum;
        }
        return max;
    }
};
// @lc code=end

