// 3066. Minimum Operations to Exceed Threshold Value II : https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<int, vector<int>, greater<int>> pr(nums.begin(),
                                                              nums.end());
    
            int cnt = 0;
    
            while (pr.size() > 1 && pr.top() < k) {
                int x = pr.top();
                pr.pop();
    
                int y = pr.top();
                pr.pop();
    
                x * 2LL + y > k ? pr.push(k + 1) : pr.push(x * 2 + y);
                cnt++;
            }
    
            return cnt;
        }
    };