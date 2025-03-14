// 2226. Maximum Candies Allocated to K Children : https://leetcode.com/problems/maximum-candies-allocated-to-k-children/

class Solution {
    public:
        inline bool ok(int md, vector<int>& candies, long long k) {
            for (int x : candies) {
                k -= x / md;
            }
    
            return k <= 0;
        }
    
        int maximumCandies(vector<int>& candies, long long k) {
            int st = 1, ed = *max_element(candies.begin(), candies.end());
            int cur = 0, md;
    
            while (st <= ed) {
                md = (st + ed) / 2;
                if (ok(md, candies, k)) {
                    cur = md;
                    st = md + 1;
                } else {
                    ed = md - 1;
                }
            }
    
            return cur;
        }
    };