/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    map <char, int> m = {
        {'a',0},{'A',1},
        {'b',2},{'B',3},
        {'c',4},{'C',5},
        {'d',6},{'D',7},
        {'e',8},{'E',9},
        {'f',10},{'F',11},
        {'g',12},{'G',13},
        {'h',14},{'H',15},
        {'i',16},{'I',17},
        {'j',18},{'J',19},
        {'k',20},{'K',21},
        {'l',22},{'L',23},
        {'m',24},{'M',25},
        {'n',26},{'N',27},
        {'o',28},{'O',29},
        {'p',30},{'P',31},
        {'q',32},{'Q',33},
        {'r',34},{'R',35},
        {'s',36},{'S',37},
        {'t',38},{'T',39},
        {'u',40},{'U',41},
        {'v',42},{'V',43},
        {'w',44},{'W',45},
        {'x',46},{'X',47},
        {'y',48},{'Y',49},
        {'z',50},{'Z',51}
    };
    int longestPalindrome(string s) {
        vector <int> v(51, 0);
        int size = s.size();
        int sum = 0;
        int flag = 0;
        int flag2 = 0;
        for(int i = 0;i < size;i++){
            v[m[s[i]]] ++;
        }
        for(int i = 0;i < 51;i ++)
            if(v[i] % 2 == 0)sum+=v[i];
            else{
            sum += (v[i] - (v[i] % 2));
            flag = 1;
            }

        return sum + flag;
    }
};
// @lc code=end

