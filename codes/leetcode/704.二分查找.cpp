/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int front = 0;
        int back = nums.size() - 1;
        int size = nums.size() - 1;
        int middle = (front + back) / 2;
        while(back > front){
            if(middle < 0 || middle > size)
                return -1;
            if(nums[middle] == target)
                break;
            else if(nums[middle] > target)
                back = middle - 1;
            else front = middle + 1;
            middle = (front + back) / 2;
        }
        if(nums[middle] != target)
            return -1;
        return middle; 
    }
};
// @lc code=end

