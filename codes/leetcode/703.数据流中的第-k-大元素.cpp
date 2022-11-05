/*
 * @lc app=leetcode.cn id=703 lang=cpp
 *
 * [703] 数据流中的第 K 大元素
 */

// @lc code=start
class KthLargest {
public:
    vector<int> v;
    int n = 0;
    int i = 0;
    KthLargest(int k, vector<int>& nums) {
        v = nums;
        if(v.size() != 0)
            sort(v.rbegin(), v.rend());
        n = k;
    }
    
    int add(int val) {
        if(v.size() == 0){
            v.push_back(val);
            return v[n-1];
        }
        int size = v.size();
        int middle = 0;
        int temp1 = 0;
        int temp2 = 0;
        while(middle != size && v[middle] > val){
            middle++;
        }
        if(middle == size){
            v.push_back(val);
            return v[n-1];
        }

        temp1 = v[middle];
        v[middle] = val;  

        for(int i = middle+1;i < size;i ++){
            temp2 = v[i];
            v[i] = temp1;
            temp1 = temp2;
        }
        v.push_back(temp1);
        return v[n-1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

