// 347. Top K Frequent Elements : https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        vector<vector<int>> buckets(n + 1);

        for (auto it : mp) {
            buckets[it.second].push_back(it.first);
        }

        vector<int> answer;

        for (int i = n; i >= 0; i--) {
            if (answer.size() >= k) {
                break;
            }
            answer.insert(answer.begin(), buckets[i].begin(), buckets[i].end());
        }

        return answer;
    }
};