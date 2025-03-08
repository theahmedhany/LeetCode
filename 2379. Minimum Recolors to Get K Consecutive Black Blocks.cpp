// 2379. Minimum Recolors to Get K Consecutive Black Blocks : https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int w = count(blocks.begin(), blocks.begin() + k, 'W'), ans = w;
    
            for (int i = k; i < blocks.size(); i++) {
                w += (blocks[i] == 'W') - (blocks[i - k] == 'W'), ans = min(ans, w);
            }
    
            return ans;
        }
    };