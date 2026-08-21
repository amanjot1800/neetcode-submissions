class TimeMap {

private:
    unordered_map<string, map<int, string>> data;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        data[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if (data.find(key) == data.end())
            return "";

        auto it = data[key].upper_bound(timestamp);

        if (it == data[key].begin())
            return "";
        --it;
        return it->second;
    }
};
