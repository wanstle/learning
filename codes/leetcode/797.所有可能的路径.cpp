/*
 * @lc app=leetcode.cn id=797 lang=cpp
 *
 * [797] 所有可能的路径
 */

// @lc code=start
class Solution {
public:
    vector <int> v;
    vector<vector<int>> path;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        v.push_back(0);
        dfs(graph, 0);
        return path;
    }
    void dfs(vector<vector<int>>& graph, int n){
        if(n == graph.size() - 1){
            path.push_back(v);
            return;
        }
        for(int i = 0;i < graph[n].size();i ++){
            v.push_back(graph[n][i]);
            dfs(graph, graph[n][i]);
            v.pop_back();
        }
    }
};
// @lc code=end

