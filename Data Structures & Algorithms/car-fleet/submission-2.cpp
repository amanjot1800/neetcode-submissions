class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_set<double> sett;
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<pair<int,int>>());

        double prev = 0;
        for (int i = 0; i < cars.size(); i++) {
            double time = (double)(target - cars[i].first) / cars[i].second;
            
            if (time >= prev) {
                sett.insert(time);
                prev = time;
            }
            
        }

        return sett.size();
    }
};
