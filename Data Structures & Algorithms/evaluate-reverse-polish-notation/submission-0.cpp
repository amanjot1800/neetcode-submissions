class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;

        for (const string& c: tokens) {
            if (c == "+") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b + a);
            } else if (c == "-") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b-a);
            } else if (c == "*") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b*a);
            } else if (c == "/") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b/a);
            } else {
                nums.push(stoi(c));
            }
        }
        return nums.top();   
    }
};
