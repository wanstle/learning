/*
 * @lc app=leetcode.cn id=2389 lang=cpp
 *
 * [2389] 和有限的最长子序列
 */

// @lc code=start
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int size = queries.size();
        vector <int> v(size, 0);
        int temp = 0;
        int length = nums.size();
        int sum = 0;
        for(int i = 0;i < length - 1;i ++){
            for(int j = i + 1; j < length;j++){
                if(nums[j] < nums[i]){
                    temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        for(int i = 0;i < size;i++){
            for(int j = 0;j < length;j ++){
                if(sum + nums[j] <= queries[i]){
                    sum += nums[j];
                    v[i]++;
                }
                else break;
            }
            sum = 0;
        }
        return v;
    }
};
// @lc code=end

