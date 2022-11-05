/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        vector <int> s;
        vector <int> num;
        int nN = 0;
        int flag = 0;
        while(n >= 10){
            num.push_back(n % 10);
            n = n / 10;
        }
        num.push_back(n);

        for(auto p = num.begin();p != num.end();p ++)
            nN += (*p) * (*p);


        while(flag == 0){
            s.push_back(nN);
            num.clear();
            while(nN >= 10){
                num.push_back(nN % 10);
                nN = nN / 10;
            }
            num.push_back(nN);
            nN = 0;
            for(auto p = num.begin();p != num.end();p ++)
                nN += (*p) * (*p);
            for(auto p = s.begin();p != s.end();p ++)
                if(nN == *p)
                    flag = 1;
        }
        if(nN == 1)
            return true;
        else return false;
    }
};
// @lc code=end

