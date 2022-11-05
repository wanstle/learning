/*
 * @lc app=leetcode.cn id=1971 lang=cpp
 *
 * [1971] 寻找图中是否存在路径
 */

// @lc code=start
class Solution {
public:
    bool flag = false;
    queue <int> s;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
        vector <int> sf(n, 0);
        s.push(source);
        sf[source] = 1;
        while(s.empty() != true){
            find_end(edges, destination, sf);
        }
        if(source == destination)
            flag = true;
        return flag;
    }
    int find_end(vector<vector<int>>& edges, int &destination, vector<int> &sf) {
        int source = s.front();
        s.pop();
        int size = edges.size();
        for(int i = 0;i < size;i++){
            if(edges[i][0] == source || edges[i][1] == source){
                int temp = edges[i][0]==source?edges[i][1]:edges[i][0];
                if(sf[temp] == 0){
                    s.push(temp);
                    sf[temp] = 1;
                }
                if(sf[destination] == 1){
                    flag = true;
                    return 0;
                }
            }
        }
        return -1;
    }
};
// @lc code=end

