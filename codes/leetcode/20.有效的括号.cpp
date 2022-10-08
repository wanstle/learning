/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    int isValid(string s) {
        stack<char> left;
        map <char, char> pair;
        pair[')'] = '(';
        pair[']'] = '[';
        pair['}'] = '{';
        int length = s.length();
        for(int i = 0;i<length;i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                left.push(s[i]);
            else{
                if(!left.empty()&&pair[s[i]]==left.top()){
                    left.pop();
                }
                else
                    return false;
            }
        }
        return left.empty();
    }
};
// @lc code=end

