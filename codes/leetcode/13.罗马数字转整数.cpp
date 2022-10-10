/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    map <char, int> m{{'I', 1},
                        {'V', 5},
                        {'X', 10},
                        {'L', 50},
                        {'C', 100},
                        {'D', 500},
                        {'M', 1000}};


    int romanToInt(string s) {
        int i = 0;
        int sum = 0;
        int dat = 0;
        while(i < s.length() - 1){
            char s1 = s[i];
            char s2 = s[i+1]; 
            dat = m[s1] * ((m[s1]<m[s2])?-1:1);
            sum += dat;
            i++;
        }
        char s3 = s[i];
        sum += m[s3];
        return sum;
    }

};
// @lc code=end

