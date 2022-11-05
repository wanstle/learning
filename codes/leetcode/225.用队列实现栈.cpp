/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
public:
    queue <int> q;
    queue <int> temp;
    MyStack() {

    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int op = 0;
        int size = q.size();
        for(int i = 0;i < size - 1;i++){
            temp.push(q.front());
            q.pop();
        }
        op = q.back();
        q.pop();
        for(int i = 0;i < size - 1;i++){
            q.push(temp.front());
            temp.pop();
        }
        return op;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

