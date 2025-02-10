// 2285. Maximum Total Importance of Roads : https://leetcode.com/problems/maximum-total-importance-of-roads/

class Solution {
    public:
        long long maximumImportance(int n, vector<vector<int>>& roads) {
            vector<int> vis(n);
    
            for (auto it : roads) {
                vis[it[0]]++;
                vis[it[1]]++;
            }
    
            sort(vis.begin(), vis.end());
            long long ans = 0;
    
            for (int i = 1; i <= n; i++) {
                ans += 1LL * vis[i - 1] * i;
            }
    
            return ans;
        }
    };