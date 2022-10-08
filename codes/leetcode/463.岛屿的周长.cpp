/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        queue<int> land_pos;
        int flag = 0;//上一行是否存在陆地
        int col = grid[0].size();
        int sum = 0;//周长总和
        int f_data = -2;//上一行pop
        int up_land = -2;//该位置前面的陆地位置
        for(auto p = grid.begin();p != grid.end();p++){
            for(int i = 0;i < col;i++){
                if(p->at(i)==1){
                    sum += 4;
                    land_pos.push(i);
                    if(flag != 0){
                        while(flag&&f_data<=i){
                            f_data=land_pos.front();
                            if(f_data==i){sum=sum - 2;land_pos.pop();flag--;}
                            else if(f_data<i){land_pos.pop();flag--;};
                        }
                    }
                    if(i == up_land + 1)sum = sum - 2;
                    up_land = i;
                }
            }
            while(flag){land_pos.pop();flag--;}
            flag = land_pos.size();
            up_land = -2;
            f_data = -2;
        }
        return sum;
    }
};
// @lc code=end

