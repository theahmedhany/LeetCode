// 981. Time Based Key-Value Store : https://leetcode.com/problems/time-based-key-value-store/

class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> values;

    void set(string key, string value, int timeStamp) {
        values[key].push_back({timeStamp, value});
    }

    string get(string key, int timestamp) {
        if (values.find(key) == values.end()) {
            return "";
        }

        int left = 0;
        int right = values[key].size() - 1;
        int mid;

        while (left <= right) {
            mid = (left + right) / 2;

            if (values[key][mid].first == timestamp) {
                return values[key][mid].second;
            } else if (values[key][mid].first > timestamp) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if (right >= 0) {
            return values[key][right].second;
        }

        return "";
    }
};
