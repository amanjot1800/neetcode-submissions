class Solution {
public:
    bool isValid(string s) {

        stack<char> stk;

        unordered_map<char, char> mapp = {{')','('}, {']','['},{'}','{'}};

        for (char str: s) {
            if (mapp.count(str)) {
                if (!stk.empty() && stk.top() == mapp[str]) {
                    stk.pop();
                } else return false;
            } else {
                stk.push(str);
            }
        }
        return stk.empty();
    }
};
