class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> stkk;

        for (int i=0; i<temperatures.size(); i++) {
            int t = temperatures[i];
            while (!stkk.empty() && t > stkk.top().first) {
                int idx = stkk.top().second;
                res[idx] = i - idx;
                stkk.pop();
            }
            stkk.push({t, i});
        }
        return res;
    }
};
